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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYCOPYPAIRATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYCOPYPAIRATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * ModifyCopyPairAttribute请求参数结构体
                */
                class ModifyCopyPairAttributeRequest : public AbstractModel
                {
                public:
                    ModifyCopyPairAttributeRequest();
                    ~ModifyCopyPairAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要修改属性的复制对id
                     * @return CopyPairId 要修改属性的复制对id
                     * 
                     */
                    std::string GetCopyPairId() const;

                    /**
                     * 设置要修改属性的复制对id
                     * @param _copyPairId 要修改属性的复制对id
                     * 
                     */
                    void SetCopyPairId(const std::string& _copyPairId);

                    /**
                     * 判断参数 CopyPairId 是否已赋值
                     * @return CopyPairId 是否已赋值
                     * 
                     */
                    bool CopyPairIdHasBeenSet() const;

                    /**
                     * 获取要修改的复制对类型，可选值：DISK、INSTANCE、CFS，默认 INSTANCE
                     * @return CopyPairType 要修改的复制对类型，可选值：DISK、INSTANCE、CFS，默认 INSTANCE
                     * 
                     */
                    std::string GetCopyPairType() const;

                    /**
                     * 设置要修改的复制对类型，可选值：DISK、INSTANCE、CFS，默认 INSTANCE
                     * @param _copyPairType 要修改的复制对类型，可选值：DISK、INSTANCE、CFS，默认 INSTANCE
                     * 
                     */
                    void SetCopyPairType(const std::string& _copyPairType);

                    /**
                     * 判断参数 CopyPairType 是否已赋值
                     * @return CopyPairType 是否已赋值
                     * 
                     */
                    bool CopyPairTypeHasBeenSet() const;

                    /**
                     * 获取修改复制对名称（长度最大支持 64 个字符）
                     * @return CopyPairName 修改复制对名称（长度最大支持 64 个字符）
                     * 
                     */
                    std::string GetCopyPairName() const;

                    /**
                     * 设置修改复制对名称（长度最大支持 64 个字符）
                     * @param _copyPairName 修改复制对名称（长度最大支持 64 个字符）
                     * 
                     */
                    void SetCopyPairName(const std::string& _copyPairName);

                    /**
                     * 判断参数 CopyPairName 是否已赋值
                     * @return CopyPairName 是否已赋值
                     * 
                     */
                    bool CopyPairNameHasBeenSet() const;

                private:

                    /**
                     * 要修改属性的复制对id
                     */
                    std::string m_copyPairId;
                    bool m_copyPairIdHasBeenSet;

                    /**
                     * 要修改的复制对类型，可选值：DISK、INSTANCE、CFS，默认 INSTANCE
                     */
                    std::string m_copyPairType;
                    bool m_copyPairTypeHasBeenSet;

                    /**
                     * 修改复制对名称（长度最大支持 64 个字符）
                     */
                    std::string m_copyPairName;
                    bool m_copyPairNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYCOPYPAIRATTRIBUTEREQUEST_H_
