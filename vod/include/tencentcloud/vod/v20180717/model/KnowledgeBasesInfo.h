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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASESINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 媒资智能知识库信息
                */
                class KnowledgeBasesInfo : public AbstractModel
                {
                public:
                    KnowledgeBasesInfo();
                    ~KnowledgeBasesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>当前媒资当导入的知识库列表</p>
                     * @return Bases <p>当前媒资当导入的知识库列表</p>
                     * 
                     */
                    std::vector<std::string> GetBases() const;

                    /**
                     * 设置<p>当前媒资当导入的知识库列表</p>
                     * @param _bases <p>当前媒资当导入的知识库列表</p>
                     * 
                     */
                    void SetBases(const std::vector<std::string>& _bases);

                    /**
                     * 判断参数 Bases 是否已赋值
                     * @return Bases 是否已赋值
                     * 
                     */
                    bool BasesHasBeenSet() const;

                private:

                    /**
                     * <p>当前媒资当导入的知识库列表</p>
                     */
                    std::vector<std::string> m_bases;
                    bool m_basesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASESINFO_H_
