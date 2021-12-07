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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateAssetImageScanTask请求参数结构体
                */
                class CreateAssetImageScanTaskRequest : public AbstractModel
                {
                public:
                    CreateAssetImageScanTaskRequest();
                    ~CreateAssetImageScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否扫描全部镜像
                     * @return All 是否扫描全部镜像
                     */
                    bool GetAll() const;

                    /**
                     * 设置是否扫描全部镜像
                     * @param All 是否扫描全部镜像
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取需要扫描的镜像列表
                     * @return Images 需要扫描的镜像列表
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置需要扫描的镜像列表
                     * @param Images 需要扫描的镜像列表
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取扫描漏洞
                     * @return ScanVul 扫描漏洞
                     */
                    bool GetScanVul() const;

                    /**
                     * 设置扫描漏洞
                     * @param ScanVul 扫描漏洞
                     */
                    void SetScanVul(const bool& _scanVul);

                    /**
                     * 判断参数 ScanVul 是否已赋值
                     * @return ScanVul 是否已赋值
                     */
                    bool ScanVulHasBeenSet() const;

                    /**
                     * 获取扫描木马
                     * @return ScanVirus 扫描木马
                     */
                    bool GetScanVirus() const;

                    /**
                     * 设置扫描木马
                     * @param ScanVirus 扫描木马
                     */
                    void SetScanVirus(const bool& _scanVirus);

                    /**
                     * 判断参数 ScanVirus 是否已赋值
                     * @return ScanVirus 是否已赋值
                     */
                    bool ScanVirusHasBeenSet() const;

                    /**
                     * 获取扫描风险
                     * @return ScanRisk 扫描风险
                     */
                    bool GetScanRisk() const;

                    /**
                     * 设置扫描风险
                     * @param ScanRisk 扫描风险
                     */
                    void SetScanRisk(const bool& _scanRisk);

                    /**
                     * 判断参数 ScanRisk 是否已赋值
                     * @return ScanRisk 是否已赋值
                     */
                    bool ScanRiskHasBeenSet() const;

                private:

                    /**
                     * 是否扫描全部镜像
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * 需要扫描的镜像列表
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 扫描漏洞
                     */
                    bool m_scanVul;
                    bool m_scanVulHasBeenSet;

                    /**
                     * 扫描木马
                     */
                    bool m_scanVirus;
                    bool m_scanVirusHasBeenSet;

                    /**
                     * 扫描风险
                     */
                    bool m_scanRisk;
                    bool m_scanRiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANTASKREQUEST_H_
