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

#include <tencentcloud/hunyuan/v20230901/model/File3Ds.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

File3Ds::File3Ds() :
    m_file3DHasBeenSet(false)
{
}

CoreInternalOutcome File3Ds::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("File3D") && !value["File3D"].IsNull())
    {
        if (!value["File3D"].IsArray())
            return CoreInternalOutcome(Core::Error("response `File3Ds.File3D` is not array type"));

        const rapidjson::Value &tmpValue = value["File3D"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            File3D item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_file3D.push_back(item);
        }
        m_file3DHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void File3Ds::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_file3DHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "File3D";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_file3D.begin(); itr != m_file3D.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<File3D> File3Ds::GetFile3D() const
{
    return m_file3D;
}

void File3Ds::SetFile3D(const vector<File3D>& _file3D)
{
    m_file3D = _file3D;
    m_file3DHasBeenSet = true;
}

bool File3Ds::File3DHasBeenSet() const
{
    return m_file3DHasBeenSet;
}

