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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESTAGSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESTAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourceTags.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyResourcesTags请求参数结构体
                */
                class ModifyResourcesTagsRequest : public AbstractModel
                {
                public:
                    ModifyResourcesTagsRequest();
                    ~ModifyResourcesTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标签类型，取值Cluster或者Node
                     * @return ModifyType 标签类型，取值Cluster或者Node
                     * 
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置标签类型，取值Cluster或者Node
                     * @param _modifyType 标签类型，取值Cluster或者Node
                     * 
                     */
                    void SetModifyType(const std::string& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return ModifyResourceTagsInfoList 标签信息
                     * 
                     */
                    std::vector<ModifyResourceTags> GetModifyResourceTagsInfoList() const;

                    /**
                     * 设置标签信息
                     * @param _modifyResourceTagsInfoList 标签信息
                     * 
                     */
                    void SetModifyResourceTagsInfoList(const std::vector<ModifyResourceTags>& _modifyResourceTagsInfoList);

                    /**
                     * 判断参数 ModifyResourceTagsInfoList 是否已赋值
                     * @return ModifyResourceTagsInfoList 是否已赋值
                     * 
                     */
                    bool ModifyResourceTagsInfoListHasBeenSet() const;

                private:

                    /**
                     * 标签类型，取值Cluster或者Node
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<ModifyResourceTags> m_modifyResourceTagsInfoList;
                    bool m_modifyResourceTagsInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESTAGSREQUEST_H_
