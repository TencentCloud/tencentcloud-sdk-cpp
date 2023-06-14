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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_ACCOUNTQUOTA_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_ACCOUNTQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/PostPaidQuota.h>
#include <tencentcloud/cvm/v20170312/model/PrePaidQuota.h>
#include <tencentcloud/cvm/v20170312/model/SpotPaidQuota.h>
#include <tencentcloud/cvm/v20170312/model/ImageQuota.h>
#include <tencentcloud/cvm/v20170312/model/DisasterRecoverGroupQuota.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 配额详情
                */
                class AccountQuota : public AbstractModel
                {
                public:
                    AccountQuota();
                    ~AccountQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后付费配额列表
                     * @return PostPaidQuotaSet 后付费配额列表
                     * 
                     */
                    std::vector<PostPaidQuota> GetPostPaidQuotaSet() const;

                    /**
                     * 设置后付费配额列表
                     * @param _postPaidQuotaSet 后付费配额列表
                     * 
                     */
                    void SetPostPaidQuotaSet(const std::vector<PostPaidQuota>& _postPaidQuotaSet);

                    /**
                     * 判断参数 PostPaidQuotaSet 是否已赋值
                     * @return PostPaidQuotaSet 是否已赋值
                     * 
                     */
                    bool PostPaidQuotaSetHasBeenSet() const;

                    /**
                     * 获取预付费配额列表
                     * @return PrePaidQuotaSet 预付费配额列表
                     * 
                     */
                    std::vector<PrePaidQuota> GetPrePaidQuotaSet() const;

                    /**
                     * 设置预付费配额列表
                     * @param _prePaidQuotaSet 预付费配额列表
                     * 
                     */
                    void SetPrePaidQuotaSet(const std::vector<PrePaidQuota>& _prePaidQuotaSet);

                    /**
                     * 判断参数 PrePaidQuotaSet 是否已赋值
                     * @return PrePaidQuotaSet 是否已赋值
                     * 
                     */
                    bool PrePaidQuotaSetHasBeenSet() const;

                    /**
                     * 获取spot配额列表
                     * @return SpotPaidQuotaSet spot配额列表
                     * 
                     */
                    std::vector<SpotPaidQuota> GetSpotPaidQuotaSet() const;

                    /**
                     * 设置spot配额列表
                     * @param _spotPaidQuotaSet spot配额列表
                     * 
                     */
                    void SetSpotPaidQuotaSet(const std::vector<SpotPaidQuota>& _spotPaidQuotaSet);

                    /**
                     * 判断参数 SpotPaidQuotaSet 是否已赋值
                     * @return SpotPaidQuotaSet 是否已赋值
                     * 
                     */
                    bool SpotPaidQuotaSetHasBeenSet() const;

                    /**
                     * 获取镜像配额列表
                     * @return ImageQuotaSet 镜像配额列表
                     * 
                     */
                    std::vector<ImageQuota> GetImageQuotaSet() const;

                    /**
                     * 设置镜像配额列表
                     * @param _imageQuotaSet 镜像配额列表
                     * 
                     */
                    void SetImageQuotaSet(const std::vector<ImageQuota>& _imageQuotaSet);

                    /**
                     * 判断参数 ImageQuotaSet 是否已赋值
                     * @return ImageQuotaSet 是否已赋值
                     * 
                     */
                    bool ImageQuotaSetHasBeenSet() const;

                    /**
                     * 获取置放群组配额列表
                     * @return DisasterRecoverGroupQuotaSet 置放群组配额列表
                     * 
                     */
                    std::vector<DisasterRecoverGroupQuota> GetDisasterRecoverGroupQuotaSet() const;

                    /**
                     * 设置置放群组配额列表
                     * @param _disasterRecoverGroupQuotaSet 置放群组配额列表
                     * 
                     */
                    void SetDisasterRecoverGroupQuotaSet(const std::vector<DisasterRecoverGroupQuota>& _disasterRecoverGroupQuotaSet);

                    /**
                     * 判断参数 DisasterRecoverGroupQuotaSet 是否已赋值
                     * @return DisasterRecoverGroupQuotaSet 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupQuotaSetHasBeenSet() const;

                private:

                    /**
                     * 后付费配额列表
                     */
                    std::vector<PostPaidQuota> m_postPaidQuotaSet;
                    bool m_postPaidQuotaSetHasBeenSet;

                    /**
                     * 预付费配额列表
                     */
                    std::vector<PrePaidQuota> m_prePaidQuotaSet;
                    bool m_prePaidQuotaSetHasBeenSet;

                    /**
                     * spot配额列表
                     */
                    std::vector<SpotPaidQuota> m_spotPaidQuotaSet;
                    bool m_spotPaidQuotaSetHasBeenSet;

                    /**
                     * 镜像配额列表
                     */
                    std::vector<ImageQuota> m_imageQuotaSet;
                    bool m_imageQuotaSetHasBeenSet;

                    /**
                     * 置放群组配额列表
                     */
                    std::vector<DisasterRecoverGroupQuota> m_disasterRecoverGroupQuotaSet;
                    bool m_disasterRecoverGroupQuotaSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_ACCOUNTQUOTA_H_
