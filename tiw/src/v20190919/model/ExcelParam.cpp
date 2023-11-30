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

#include <tencentcloud/tiw/v20190919/model/ExcelParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

ExcelParam::ExcelParam() :
    m_paperSizeHasBeenSet(false),
    m_paperDirectionHasBeenSet(false)
{
}

CoreInternalOutcome ExcelParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PaperSize") && !value["PaperSize"].IsNull())
    {
        if (!value["PaperSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExcelParam.PaperSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paperSize = value["PaperSize"].GetInt64();
        m_paperSizeHasBeenSet = true;
    }

    if (value.HasMember("PaperDirection") && !value["PaperDirection"].IsNull())
    {
        if (!value["PaperDirection"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExcelParam.PaperDirection` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paperDirection = value["PaperDirection"].GetInt64();
        m_paperDirectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExcelParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paperSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaperSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paperSize, allocator);
    }

    if (m_paperDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaperDirection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paperDirection, allocator);
    }

}


int64_t ExcelParam::GetPaperSize() const
{
    return m_paperSize;
}

void ExcelParam::SetPaperSize(const int64_t& _paperSize)
{
    m_paperSize = _paperSize;
    m_paperSizeHasBeenSet = true;
}

bool ExcelParam::PaperSizeHasBeenSet() const
{
    return m_paperSizeHasBeenSet;
}

int64_t ExcelParam::GetPaperDirection() const
{
    return m_paperDirection;
}

void ExcelParam::SetPaperDirection(const int64_t& _paperDirection)
{
    m_paperDirection = _paperDirection;
    m_paperDirectionHasBeenSet = true;
}

bool ExcelParam::PaperDirectionHasBeenSet() const
{
    return m_paperDirectionHasBeenSet;
}

