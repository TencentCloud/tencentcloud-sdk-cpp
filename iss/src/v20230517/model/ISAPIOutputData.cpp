/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/iss/v20230517/model/ISAPIOutputData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ISAPIOutputData::ISAPIOutputData() :
    m_outputDataHasBeenSet(false)
{
}

CoreInternalOutcome ISAPIOutputData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputData") && !value["OutputData"].IsNull())
    {
        if (!value["OutputData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ISAPIOutputData.OutputData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputData = string(value["OutputData"].GetString());
        m_outputDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ISAPIOutputData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputData.c_str(), allocator).Move(), allocator);
    }

}


string ISAPIOutputData::GetOutputData() const
{
    return m_outputData;
}

void ISAPIOutputData::SetOutputData(const string& _outputData)
{
    m_outputData = _outputData;
    m_outputDataHasBeenSet = true;
}

bool ISAPIOutputData::OutputDataHasBeenSet() const
{
    return m_outputDataHasBeenSet;
}

