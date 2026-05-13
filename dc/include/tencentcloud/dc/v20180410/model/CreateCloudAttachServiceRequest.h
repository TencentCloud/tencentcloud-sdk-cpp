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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_CREATECLOUDATTACHSERVICEREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_CREATECLOUDATTACHSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/CreateCasInput.h>
#include <tencentcloud/dc/v20180410/model/Tag.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * CreateCloudAttachService请求参数结构体
                */
                class CreateCloudAttachServiceRequest : public AbstractModel
                {
                public:
                    CreateCloudAttachServiceRequest();
                    ~CreateCloudAttachServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>创建敏捷上云入参</p>
                     * @return Data <p>创建敏捷上云入参</p>
                     * 
                     */
                    CreateCasInput GetData() const;

                    /**
                     * 设置<p>创建敏捷上云入参</p>
                     * @param _data <p>创建敏捷上云入参</p>
                     * 
                     */
                    void SetData(const CreateCasInput& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>创建敏捷上云入参</p>
                     */
                    CreateCasInput m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_CREATECLOUDATTACHSERVICEREQUEST_H_
