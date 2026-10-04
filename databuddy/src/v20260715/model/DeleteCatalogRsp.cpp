/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/databuddy/v20260715/model/DeleteCatalogRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

DeleteCatalogRsp::DeleteCatalogRsp() :
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome DeleteCatalogRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteCatalogRsp.Result` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetBool();
        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeleteCatalogRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

}


bool DeleteCatalogRsp::GetResult() const
{
    return m_result;
}

void DeleteCatalogRsp::SetResult(const bool& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool DeleteCatalogRsp::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

