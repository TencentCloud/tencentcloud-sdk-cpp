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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_VPCINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_VPCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * VPC信息
                */
                class VPCInfo : public AbstractModel
                {
                public:
                    VPCInfo();
                    ~VPCInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>VPC 唯一 ID</p><p>参数格式：vpc-xxxxx</p>
                     * @return UniqVpcId <p>VPC 唯一 ID</p><p>参数格式：vpc-xxxxx</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>VPC 唯一 ID</p><p>参数格式：vpc-xxxxx</p>
                     * @param _uniqVpcId <p>VPC 唯一 ID</p><p>参数格式：vpc-xxxxx</p>
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>VPC 所在地域</p><p>参数格式：ap-xxxx</p>
                     * @return Region <p>VPC 所在地域</p><p>参数格式：ap-xxxx</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>VPC 所在地域</p><p>参数格式：ap-xxxx</p>
                     * @param _region <p>VPC 所在地域</p><p>参数格式：ap-xxxx</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * <p>VPC 唯一 ID</p><p>参数格式：vpc-xxxxx</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>VPC 所在地域</p><p>参数格式：ap-xxxx</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_VPCINFO_H_
