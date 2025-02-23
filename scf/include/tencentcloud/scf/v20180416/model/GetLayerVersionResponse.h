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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETLAYERVERSIONRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETLAYERVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetLayerVersion返回参数结构体
                */
                class GetLayerVersionResponse : public AbstractModel
                {
                public:
                    GetLayerVersionResponse();
                    ~GetLayerVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取适配的运行时
                     * @return CompatibleRuntimes 适配的运行时
                     * 
                     */
                    std::vector<std::string> GetCompatibleRuntimes() const;

                    /**
                     * 判断参数 CompatibleRuntimes 是否已赋值
                     * @return CompatibleRuntimes 是否已赋值
                     * 
                     */
                    bool CompatibleRuntimesHasBeenSet() const;

                    /**
                     * 获取层中版本文件的SHA256编码
                     * @return CodeSha256 层中版本文件的SHA256编码
                     * 
                     */
                    std::string GetCodeSha256() const;

                    /**
                     * 判断参数 CodeSha256 是否已赋值
                     * @return CodeSha256 是否已赋值
                     * 
                     */
                    bool CodeSha256HasBeenSet() const;

                    /**
                     * 获取层中版本文件的下载地址
                     * @return Location 层中版本文件的下载地址
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取版本的创建时间
                     * @return AddTime 版本的创建时间
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取版本的描述信息
                     * @return Description 版本的描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取许可证信息
                     * @return LicenseInfo 许可证信息
                     * 
                     */
                    std::string GetLicenseInfo() const;

                    /**
                     * 判断参数 LicenseInfo 是否已赋值
                     * @return LicenseInfo 是否已赋值
                     * 
                     */
                    bool LicenseInfoHasBeenSet() const;

                    /**
                     * 获取版本号
                     * @return LayerVersion 版本号
                     * 
                     */
                    int64_t GetLayerVersion() const;

                    /**
                     * 判断参数 LayerVersion 是否已赋值
                     * @return LayerVersion 是否已赋值
                     * 
                     */
                    bool LayerVersionHasBeenSet() const;

                    /**
                     * 获取层名称
                     * @return LayerName 层名称
                     * 
                     */
                    std::string GetLayerName() const;

                    /**
                     * 判断参数 LayerName 是否已赋值
                     * @return LayerName 是否已赋值
                     * 
                     */
                    bool LayerNameHasBeenSet() const;

                    /**
                     * 获取层的具体版本当前状态，状态值[参考此处](https://cloud.tencent.com/document/product/583/115197#.E5.B1.82.EF.BC.88Layer.EF.BC.89.E7.8A.B6.E6.80.81)
                     * @return Status 层的具体版本当前状态，状态值[参考此处](https://cloud.tencent.com/document/product/583/115197#.E5.B1.82.EF.BC.88Layer.EF.BC.89.E7.8A.B6.E6.80.81)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 适配的运行时
                     */
                    std::vector<std::string> m_compatibleRuntimes;
                    bool m_compatibleRuntimesHasBeenSet;

                    /**
                     * 层中版本文件的SHA256编码
                     */
                    std::string m_codeSha256;
                    bool m_codeSha256HasBeenSet;

                    /**
                     * 层中版本文件的下载地址
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 版本的创建时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 版本的描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 许可证信息
                     */
                    std::string m_licenseInfo;
                    bool m_licenseInfoHasBeenSet;

                    /**
                     * 版本号
                     */
                    int64_t m_layerVersion;
                    bool m_layerVersionHasBeenSet;

                    /**
                     * 层名称
                     */
                    std::string m_layerName;
                    bool m_layerNameHasBeenSet;

                    /**
                     * 层的具体版本当前状态，状态值[参考此处](https://cloud.tencent.com/document/product/583/115197#.E5.B1.82.EF.BC.88Layer.EF.BC.89.E7.8A.B6.E6.80.81)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETLAYERVERSIONRESPONSE_H_
