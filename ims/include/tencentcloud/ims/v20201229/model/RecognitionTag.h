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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_RECOGNITIONTAG_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_RECOGNITIONTAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20201229/model/Location.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 识别类型标签信息
                */
                class RecognitionTag : public AbstractModel
                {
                public:
                    RecognitionTag();
                    ~RecognitionTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签名称
                     * @return Name 标签名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置标签名称
                     * @param _name 标签名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取置信分：0～100，数值越大表示置信度越高
                     * @return Score 置信分：0～100，数值越大表示置信度越高
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置置信分：0～100，数值越大表示置信度越高
                     * @param _score 置信分：0～100，数值越大表示置信度越高
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取标签位置信息，若模型无位置信息，则可能为零值
                     * @return Location 标签位置信息，若模型无位置信息，则可能为零值
                     * 
                     */
                    Location GetLocation() const;

                    /**
                     * 设置标签位置信息，若模型无位置信息，则可能为零值
                     * @param _location 标签位置信息，若模型无位置信息，则可能为零值
                     * 
                     */
                    void SetLocation(const Location& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * 标签名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 置信分：0～100，数值越大表示置信度越高
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 标签位置信息，若模型无位置信息，则可能为零值
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_RECOGNITIONTAG_H_
