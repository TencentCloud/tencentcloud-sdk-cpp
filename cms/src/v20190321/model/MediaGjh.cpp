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

#include <tencentcloud/cms/v20190321/model/MediaGjh.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

MediaGjh::MediaGjh() :
    m_picHasBeenSet(false),
    m_textHasBeenSet(false),
    m_videoHasBeenSet(false)
{
}

CoreInternalOutcome MediaGjh::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Pic") && !value["Pic"].IsNull())
    {
        if (!value["Pic"].IsArray())
            return CoreInternalOutcome(Error("response `MediaGjh.Pic` is not array type"));

        const Value &tmpValue = value["Pic"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaInfoTypeGjh item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pic.push_back(item);
        }
        m_picHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsArray())
            return CoreInternalOutcome(Error("response `MediaGjh.Text` is not array type"));

        const Value &tmpValue = value["Text"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaInfoTypeGjh item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_text.push_back(item);
        }
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Video") && !value["Video"].IsNull())
    {
        if (!value["Video"].IsArray())
            return CoreInternalOutcome(Error("response `MediaGjh.Video` is not array type"));

        const Value &tmpValue = value["Video"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaInfoTypeGjh item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_video.push_back(item);
        }
        m_videoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaGjh::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_picHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Pic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pic.begin(); itr != m_pic.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_textHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_text.begin(); itr != m_text.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_videoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Video";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_video.begin(); itr != m_video.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MediaInfoTypeGjh> MediaGjh::GetPic() const
{
    return m_pic;
}

void MediaGjh::SetPic(const vector<MediaInfoTypeGjh>& _pic)
{
    m_pic = _pic;
    m_picHasBeenSet = true;
}

bool MediaGjh::PicHasBeenSet() const
{
    return m_picHasBeenSet;
}

vector<MediaInfoTypeGjh> MediaGjh::GetText() const
{
    return m_text;
}

void MediaGjh::SetText(const vector<MediaInfoTypeGjh>& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool MediaGjh::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<MediaInfoTypeGjh> MediaGjh::GetVideo() const
{
    return m_video;
}

void MediaGjh::SetVideo(const vector<MediaInfoTypeGjh>& _video)
{
    m_video = _video;
    m_videoHasBeenSet = true;
}

bool MediaGjh::VideoHasBeenSet() const
{
    return m_videoHasBeenSet;
}

