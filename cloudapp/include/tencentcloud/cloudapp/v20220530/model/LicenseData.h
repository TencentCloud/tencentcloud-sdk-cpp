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

#ifndef TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_LICENSEDATA_H_
#define TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_LICENSEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudapp/v20220530/model/DisplayMetadata.h>


namespace TencentCloud
{
    namespace Cloudapp
    {
        namespace V20220530
        {
            namespace Model
            {
                /**
                * License 内容信息
                */
                class LicenseData : public AbstractModel
                {
                public:
                    LicenseData();
                    ~LicenseData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>License 文本内容。支持密钥、证书等文本形式，二进制的密钥需要伙伴进行 base64 转码</p>
                     * @return Text <p>License 文本内容。支持密钥、证书等文本形式，二进制的密钥需要伙伴进行 base64 转码</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>License 文本内容。支持密钥、证书等文本形式，二进制的密钥需要伙伴进行 base64 转码</p>
                     * @param _text <p>License 文本内容。支持密钥、证书等文本形式，二进制的密钥需要伙伴进行 base64 转码</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>部署服务输出信息，基于部署签发 License 时需要该参数。</p>
                     * @return DeploymentOutput <p>部署服务输出信息，基于部署签发 License 时需要该参数。</p>
                     * 
                     */
                    std::string GetDeploymentOutput() const;

                    /**
                     * 设置<p>部署服务输出信息，基于部署签发 License 时需要该参数。</p>
                     * @param _deploymentOutput <p>部署服务输出信息，基于部署签发 License 时需要该参数。</p>
                     * 
                     */
                    void SetDeploymentOutput(const std::string& _deploymentOutput);

                    /**
                     * 判断参数 DeploymentOutput 是否已赋值
                     * @return DeploymentOutput 是否已赋值
                     * 
                     */
                    bool DeploymentOutputHasBeenSet() const;

                    /**
                     * 获取<p>License 前端展示信息。key、value 形式，比如可传入，颁发机构：XXXX 有限公司</p>
                     * @return Metadata <p>License 前端展示信息。key、value 形式，比如可传入，颁发机构：XXXX 有限公司</p>
                     * 
                     */
                    std::vector<DisplayMetadata> GetMetadata() const;

                    /**
                     * 设置<p>License 前端展示信息。key、value 形式，比如可传入，颁发机构：XXXX 有限公司</p>
                     * @param _metadata <p>License 前端展示信息。key、value 形式，比如可传入，颁发机构：XXXX 有限公司</p>
                     * 
                     */
                    void SetMetadata(const std::vector<DisplayMetadata>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * <p>License 文本内容。支持密钥、证书等文本形式，二进制的密钥需要伙伴进行 base64 转码</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>部署服务输出信息，基于部署签发 License 时需要该参数。</p>
                     */
                    std::string m_deploymentOutput;
                    bool m_deploymentOutputHasBeenSet;

                    /**
                     * <p>License 前端展示信息。key、value 形式，比如可传入，颁发机构：XXXX 有限公司</p>
                     */
                    std::vector<DisplayMetadata> m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_LICENSEDATA_H_
