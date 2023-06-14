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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBECAMERAPERSONRESPONSE_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBECAMERAPERSONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/youmall/v20180228/model/CameraPersonInfo.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeCameraPerson返回参数结构体
                */
                class DescribeCameraPersonResponse : public AbstractModel
                {
                public:
                    DescribeCameraPersonResponse();
                    ~DescribeCameraPersonResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集团id
                     * @return CompanyId 集团id
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取店铺id
                     * @return ShopId 店铺id
                     * 
                     */
                    int64_t GetShopId() const;

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取摄像机id
                     * @return CameraId 摄像机id
                     * 
                     */
                    int64_t GetCameraId() const;

                    /**
                     * 判断参数 CameraId 是否已赋值
                     * @return CameraId 是否已赋值
                     * 
                     */
                    bool CameraIdHasBeenSet() const;

                    /**
                     * 获取pos机id
                     * @return PosId pos机id
                     * 
                     */
                    std::string GetPosId() const;

                    /**
                     * 判断参数 PosId 是否已赋值
                     * @return PosId 是否已赋值
                     * 
                     */
                    bool PosIdHasBeenSet() const;

                    /**
                     * 获取抓取的顾客信息
                     * @return Infos 抓取的顾客信息
                     * 
                     */
                    std::vector<CameraPersonInfo> GetInfos() const;

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                private:

                    /**
                     * 集团id
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 店铺id
                     */
                    int64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 摄像机id
                     */
                    int64_t m_cameraId;
                    bool m_cameraIdHasBeenSet;

                    /**
                     * pos机id
                     */
                    std::string m_posId;
                    bool m_posIdHasBeenSet;

                    /**
                     * 抓取的顾客信息
                     */
                    std::vector<CameraPersonInfo> m_infos;
                    bool m_infosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBECAMERAPERSONRESPONSE_H_
