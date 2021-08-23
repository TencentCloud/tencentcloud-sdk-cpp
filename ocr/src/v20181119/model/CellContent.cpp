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

#include <tencentcloud/ocr/v20181119/model/CellContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

CellContent::CellContent() :
    m_paragNoHasBeenSet(false),
    m_wordSizeHasBeenSet(false)
{
}

CoreInternalOutcome CellContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParagNo") && !value["ParagNo"].IsNull())
    {
        if (!value["ParagNo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CellContent.ParagNo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paragNo = value["ParagNo"].GetInt64();
        m_paragNoHasBeenSet = true;
    }

    if (value.HasMember("WordSize") && !value["WordSize"].IsNull())
    {
        if (!value["WordSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CellContent.WordSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wordSize = value["WordSize"].GetInt64();
        m_wordSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CellContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paragNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParagNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paragNo, allocator);
    }

    if (m_wordSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wordSize, allocator);
    }

}


int64_t CellContent::GetParagNo() const
{
    return m_paragNo;
}

void CellContent::SetParagNo(const int64_t& _paragNo)
{
    m_paragNo = _paragNo;
    m_paragNoHasBeenSet = true;
}

bool CellContent::ParagNoHasBeenSet() const
{
    return m_paragNoHasBeenSet;
}

int64_t CellContent::GetWordSize() const
{
    return m_wordSize;
}

void CellContent::SetWordSize(const int64_t& _wordSize)
{
    m_wordSize = _wordSize;
    m_wordSizeHasBeenSet = true;
}

bool CellContent::WordSizeHasBeenSet() const
{
    return m_wordSizeHasBeenSet;
}

