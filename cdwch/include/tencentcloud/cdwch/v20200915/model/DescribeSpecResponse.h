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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBESPECRESPONSE_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBESPECRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/ResourceSpec.h>
#include <tencentcloud/cdwch/v20200915/model/DiskSpec.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * DescribeSpec返回参数结构体
                */
                class DescribeSpecResponse : public AbstractModel
                {
                public:
                    DescribeSpecResponse();
                    ~DescribeSpecResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取zookeeper节点规格描述
                     * @return CommonSpec zookeeper节点规格描述
                     * 
                     */
                    std::vector<ResourceSpec> GetCommonSpec() const;

                    /**
                     * 判断参数 CommonSpec 是否已赋值
                     * @return CommonSpec 是否已赋值
                     * 
                     */
                    bool CommonSpecHasBeenSet() const;

                    /**
                     * 获取数据节点规格描述
                     * @return DataSpec 数据节点规格描述
                     * 
                     */
                    std::vector<ResourceSpec> GetDataSpec() const;

                    /**
                     * 判断参数 DataSpec 是否已赋值
                     * @return DataSpec 是否已赋值
                     * 
                     */
                    bool DataSpecHasBeenSet() const;

                    /**
                     * 获取云盘列表
                     * @return AttachCBSSpec 云盘列表
                     * 
                     */
                    std::vector<DiskSpec> GetAttachCBSSpec() const;

                    /**
                     * 判断参数 AttachCBSSpec 是否已赋值
                     * @return AttachCBSSpec 是否已赋值
                     * 
                     */
                    bool AttachCBSSpecHasBeenSet() const;

                private:

                    /**
                     * zookeeper节点规格描述
                     */
                    std::vector<ResourceSpec> m_commonSpec;
                    bool m_commonSpecHasBeenSet;

                    /**
                     * 数据节点规格描述
                     */
                    std::vector<ResourceSpec> m_dataSpec;
                    bool m_dataSpecHasBeenSet;

                    /**
                     * 云盘列表
                     */
                    std::vector<DiskSpec> m_attachCBSSpec;
                    bool m_attachCBSSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBESPECRESPONSE_H_
