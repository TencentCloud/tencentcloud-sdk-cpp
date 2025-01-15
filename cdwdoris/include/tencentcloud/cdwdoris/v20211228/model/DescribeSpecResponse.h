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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESPECRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESPECRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/ResourceSpec.h>
#include <tencentcloud/cdwdoris/v20211228/model/DiskSpec.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
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
                     * 获取fe节点规格描述
                     * @return MasterSpec fe节点规格描述
                     * 
                     */
                    std::vector<ResourceSpec> GetMasterSpec() const;

                    /**
                     * 判断参数 MasterSpec 是否已赋值
                     * @return MasterSpec 是否已赋值
                     * 
                     */
                    bool MasterSpecHasBeenSet() const;

                    /**
                     * 获取be节点规格描述
                     * @return CoreSpec be节点规格描述
                     * 
                     */
                    std::vector<ResourceSpec> GetCoreSpec() const;

                    /**
                     * 判断参数 CoreSpec 是否已赋值
                     * @return CoreSpec 是否已赋值
                     * 
                     */
                    bool CoreSpecHasBeenSet() const;

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

                    /**
                     * 获取cn节点列表
                     * @return CNSpec cn节点列表
                     * 
                     */
                    std::vector<ResourceSpec> GetCNSpec() const;

                    /**
                     * 判断参数 CNSpec 是否已赋值
                     * @return CNSpec 是否已赋值
                     * 
                     */
                    bool CNSpecHasBeenSet() const;

                private:

                    /**
                     * fe节点规格描述
                     */
                    std::vector<ResourceSpec> m_masterSpec;
                    bool m_masterSpecHasBeenSet;

                    /**
                     * be节点规格描述
                     */
                    std::vector<ResourceSpec> m_coreSpec;
                    bool m_coreSpecHasBeenSet;

                    /**
                     * 云盘列表
                     */
                    std::vector<DiskSpec> m_attachCBSSpec;
                    bool m_attachCBSSpecHasBeenSet;

                    /**
                     * cn节点列表
                     */
                    std::vector<ResourceSpec> m_cNSpec;
                    bool m_cNSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESPECRESPONSE_H_
