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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_DELETETAGREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_DELETETAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * DeleteTag请求参数结构体
                */
                class DeleteTagRequest : public AbstractModel
                {
                public:
                    DeleteTagRequest();
                    ~DeleteTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要删除的标签键
                     * @return TagKey 需要删除的标签键
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置需要删除的标签键
                     * @param _tagKey 需要删除的标签键
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取需要删除的标签值
                     * @return TagValue 需要删除的标签值
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置需要删除的标签值
                     * @param _tagValue 需要删除的标签值
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                private:

                    /**
                     * 需要删除的标签键
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * 需要删除的标签值
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_DELETETAGREQUEST_H_
