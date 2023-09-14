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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_NAMESPACEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_NAMESPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 返回的命名空间列表信息
                */
                class NamespaceInfo : public AbstractModel
                {
                public:
                    NamespaceInfo();
                    ~NamespaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间名称
                     * @return Namespace 命名空间名称
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespace 命名空间名称
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取包含仓库数
                     * @return RegistryCnt 包含仓库数
                     * 
                     */
                    int64_t GetRegistryCnt() const;

                    /**
                     * 设置包含仓库数
                     * @param _registryCnt 包含仓库数
                     * 
                     */
                    void SetRegistryCnt(const int64_t& _registryCnt);

                    /**
                     * 判断参数 RegistryCnt 是否已赋值
                     * @return RegistryCnt 是否已赋值
                     * 
                     */
                    bool RegistryCntHasBeenSet() const;

                    /**
                     * 获取包含镜像数
                     * @return ImageCnt 包含镜像数
                     * 
                     */
                    int64_t GetImageCnt() const;

                    /**
                     * 设置包含镜像数
                     * @param _imageCnt 包含镜像数
                     * 
                     */
                    void SetImageCnt(const int64_t& _imageCnt);

                    /**
                     * 判断参数 ImageCnt 是否已赋值
                     * @return ImageCnt 是否已赋值
                     * 
                     */
                    bool ImageCntHasBeenSet() const;

                    /**
                     * 获取包含风险镜像数
                     * @return RiskImageCnt 包含风险镜像数
                     * 
                     */
                    int64_t GetRiskImageCnt() const;

                    /**
                     * 设置包含风险镜像数
                     * @param _riskImageCnt 包含风险镜像数
                     * 
                     */
                    void SetRiskImageCnt(const int64_t& _riskImageCnt);

                    /**
                     * 判断参数 RiskImageCnt 是否已赋值
                     * @return RiskImageCnt 是否已赋值
                     * 
                     */
                    bool RiskImageCntHasBeenSet() const;

                private:

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 包含仓库数
                     */
                    int64_t m_registryCnt;
                    bool m_registryCntHasBeenSet;

                    /**
                     * 包含镜像数
                     */
                    int64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * 包含风险镜像数
                     */
                    int64_t m_riskImageCnt;
                    bool m_riskImageCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_NAMESPACEINFO_H_
