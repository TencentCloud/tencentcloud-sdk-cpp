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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETDETAILINFORESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETDETAILINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceAssetDetailInfo.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceContainerDetailInfo.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceImageDetailInfo.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceHostDetailInfo.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceK8SDetailInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeComplianceAssetDetailInfo返回参数结构体
                */
                class DescribeComplianceAssetDetailInfoResponse : public AbstractModel
                {
                public:
                    DescribeComplianceAssetDetailInfoResponse();
                    ~DescribeComplianceAssetDetailInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取某资产的详情。
                     * @return AssetDetailInfo 某资产的详情。
                     * 
                     */
                    ComplianceAssetDetailInfo GetAssetDetailInfo() const;

                    /**
                     * 判断参数 AssetDetailInfo 是否已赋值
                     * @return AssetDetailInfo 是否已赋值
                     * 
                     */
                    bool AssetDetailInfoHasBeenSet() const;

                    /**
                     * 获取当资产为容器时，返回此字段。
                     * @return ContainerDetailInfo 当资产为容器时，返回此字段。
                     * 
                     */
                    ComplianceContainerDetailInfo GetContainerDetailInfo() const;

                    /**
                     * 判断参数 ContainerDetailInfo 是否已赋值
                     * @return ContainerDetailInfo 是否已赋值
                     * 
                     */
                    bool ContainerDetailInfoHasBeenSet() const;

                    /**
                     * 获取当资产为镜像时，返回此字段。
                     * @return ImageDetailInfo 当资产为镜像时，返回此字段。
                     * 
                     */
                    ComplianceImageDetailInfo GetImageDetailInfo() const;

                    /**
                     * 判断参数 ImageDetailInfo 是否已赋值
                     * @return ImageDetailInfo 是否已赋值
                     * 
                     */
                    bool ImageDetailInfoHasBeenSet() const;

                    /**
                     * 获取当资产为主机时，返回此字段。
                     * @return HostDetailInfo 当资产为主机时，返回此字段。
                     * 
                     */
                    ComplianceHostDetailInfo GetHostDetailInfo() const;

                    /**
                     * 判断参数 HostDetailInfo 是否已赋值
                     * @return HostDetailInfo 是否已赋值
                     * 
                     */
                    bool HostDetailInfoHasBeenSet() const;

                    /**
                     * 获取当资产为K8S时，返回此字段。
                     * @return K8SDetailInfo 当资产为K8S时，返回此字段。
                     * 
                     */
                    ComplianceK8SDetailInfo GetK8SDetailInfo() const;

                    /**
                     * 判断参数 K8SDetailInfo 是否已赋值
                     * @return K8SDetailInfo 是否已赋值
                     * 
                     */
                    bool K8SDetailInfoHasBeenSet() const;

                private:

                    /**
                     * 某资产的详情。
                     */
                    ComplianceAssetDetailInfo m_assetDetailInfo;
                    bool m_assetDetailInfoHasBeenSet;

                    /**
                     * 当资产为容器时，返回此字段。
                     */
                    ComplianceContainerDetailInfo m_containerDetailInfo;
                    bool m_containerDetailInfoHasBeenSet;

                    /**
                     * 当资产为镜像时，返回此字段。
                     */
                    ComplianceImageDetailInfo m_imageDetailInfo;
                    bool m_imageDetailInfoHasBeenSet;

                    /**
                     * 当资产为主机时，返回此字段。
                     */
                    ComplianceHostDetailInfo m_hostDetailInfo;
                    bool m_hostDetailInfoHasBeenSet;

                    /**
                     * 当资产为K8S时，返回此字段。
                     */
                    ComplianceK8SDetailInfo m_k8SDetailInfo;
                    bool m_k8SDetailInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETDETAILINFORESPONSE_H_
