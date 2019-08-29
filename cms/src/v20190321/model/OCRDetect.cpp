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

#include <tencentcloud/cms/v20190321/model/OCRDetect.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

OCRDetect::OCRDetect() :
    m_textInfoHasBeenSet(false)
{
}

CoreInternalOutcome OCRDetect::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TextInfo") && !value["TextInfo"].IsNull())
    {
        if (!value["TextInfo"].IsString())
        {
            return CoreInternalOutcome(Error("response `OCRDetect.TextInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textInfo = string(value["TextInfo"].GetString());
        m_textInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OCRDetect::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_textInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TextInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_textInfo.c_str(), allocator).Move(), allocator);
    }

}


string OCRDetect::GetTextInfo() const
{
    return m_textInfo;
}

void OCRDetect::SetTextInfo(const string& _textInfo)
{
    m_textInfo = _textInfo;
    m_textInfoHasBeenSet = true;
}

bool OCRDetect::TextInfoHasBeenSet() const
{
    return m_textInfoHasBeenSet;
}

