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

#include <tencentcloud/ocr/v20181119/model/OCRResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

OCRResult::OCRResult() :
    m_iDCardResultHasBeenSet(false)
{
}

CoreInternalOutcome OCRResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IDCardResult") && !value["IDCardResult"].IsNull())
    {
        if (!value["IDCardResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OCRResult.IDCardResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iDCardResult.Deserialize(value["IDCardResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iDCardResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OCRResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDCardResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDCardResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iDCardResult.ToJsonObject(value[key.c_str()], allocator);
    }

}


IDCardResult OCRResult::GetIDCardResult() const
{
    return m_iDCardResult;
}

void OCRResult::SetIDCardResult(const IDCardResult& _iDCardResult)
{
    m_iDCardResult = _iDCardResult;
    m_iDCardResultHasBeenSet = true;
}

bool OCRResult::IDCardResultHasBeenSet() const
{
    return m_iDCardResultHasBeenSet;
}

