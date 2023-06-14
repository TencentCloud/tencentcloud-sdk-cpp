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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATESTORAGESERVICEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATESTORAGESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * CreateStorageService请求参数结构体
                */
                class CreateStorageServiceRequest : public AbstractModel
                {
                public:
                    CreateStorageServiceRequest();
                    ~CreateStorageServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云存套餐ID：
yc1m3d ： 全时3天存储月套餐。
yc1m7d ： 全时7天存储月套餐。
yc1m30d ：全时30天存储月套餐。
yc1y3d ：全时3天存储年套餐。
yc1y7d ：全时7天存储年套餐。
yc1y30d ：全时30天存储年套餐。
ye1m3d ：事件3天存储月套餐。
ye1m7d ：事件7天存储月套餐。
ye1m30d ：事件30天存储月套餐 。
ye1y3d ：事件3天存储年套餐。
ye1y7d ：事件7天存储年套餐。
ye1y30d ：事件30天存储年套餐。
yc1w7d : 全时7天存储周套餐。
ye1w7d : 事件7天存储周套餐。
                     * @return PkgId 云存套餐ID：
yc1m3d ： 全时3天存储月套餐。
yc1m7d ： 全时7天存储月套餐。
yc1m30d ：全时30天存储月套餐。
yc1y3d ：全时3天存储年套餐。
yc1y7d ：全时7天存储年套餐。
yc1y30d ：全时30天存储年套餐。
ye1m3d ：事件3天存储月套餐。
ye1m7d ：事件7天存储月套餐。
ye1m30d ：事件30天存储月套餐 。
ye1y3d ：事件3天存储年套餐。
ye1y7d ：事件7天存储年套餐。
ye1y30d ：事件30天存储年套餐。
yc1w7d : 全时7天存储周套餐。
ye1w7d : 事件7天存储周套餐。
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置云存套餐ID：
yc1m3d ： 全时3天存储月套餐。
yc1m7d ： 全时7天存储月套餐。
yc1m30d ：全时30天存储月套餐。
yc1y3d ：全时3天存储年套餐。
yc1y7d ：全时7天存储年套餐。
yc1y30d ：全时30天存储年套餐。
ye1m3d ：事件3天存储月套餐。
ye1m7d ：事件7天存储月套餐。
ye1m30d ：事件30天存储月套餐 。
ye1y3d ：事件3天存储年套餐。
ye1y7d ：事件7天存储年套餐。
ye1y30d ：事件30天存储年套餐。
yc1w7d : 全时7天存储周套餐。
ye1w7d : 事件7天存储周套餐。
                     * @param _pkgId 云存套餐ID：
yc1m3d ： 全时3天存储月套餐。
yc1m7d ： 全时7天存储月套餐。
yc1m30d ：全时30天存储月套餐。
yc1y3d ：全时3天存储年套餐。
yc1y7d ：全时7天存储年套餐。
yc1y30d ：全时30天存储年套餐。
ye1m3d ：事件3天存储月套餐。
ye1m7d ：事件7天存储月套餐。
ye1m30d ：事件30天存储月套餐 。
ye1y3d ：事件3天存储年套餐。
ye1y7d ：事件7天存储年套餐。
ye1y30d ：事件30天存储年套餐。
yc1w7d : 全时7天存储周套餐。
ye1w7d : 事件7天存储周套餐。
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取设备TID
                     * @return Tid 设备TID
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置设备TID
                     * @param _tid 设备TID
                     * 
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取订单数量,可一次性创建多个订单
                     * @return OrderCount 订单数量,可一次性创建多个订单
                     * 
                     */
                    int64_t GetOrderCount() const;

                    /**
                     * 设置订单数量,可一次性创建多个订单
                     * @param _orderCount 订单数量,可一次性创建多个订单
                     * 
                     */
                    void SetOrderCount(const int64_t& _orderCount);

                    /**
                     * 判断参数 OrderCount 是否已赋值
                     * @return OrderCount 是否已赋值
                     * 
                     */
                    bool OrderCountHasBeenSet() const;

                    /**
                     * 获取云存服务所在的区域,如ap-guangzhou,ap-singapore, na-siliconvalley, eu-frankfurt
                     * @return StorageRegion 云存服务所在的区域,如ap-guangzhou,ap-singapore, na-siliconvalley, eu-frankfurt
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置云存服务所在的区域,如ap-guangzhou,ap-singapore, na-siliconvalley, eu-frankfurt
                     * @param _storageRegion 云存服务所在的区域,如ap-guangzhou,ap-singapore, na-siliconvalley, eu-frankfurt
                     * 
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取视频流通道号。(对于存在多路视频流的设备，如NVR设备，与设备实际视频流通道号对应)
                     * @return ChnNum 视频流通道号。(对于存在多路视频流的设备，如NVR设备，与设备实际视频流通道号对应)
                     * 
                     */
                    int64_t GetChnNum() const;

                    /**
                     * 设置视频流通道号。(对于存在多路视频流的设备，如NVR设备，与设备实际视频流通道号对应)
                     * @param _chnNum 视频流通道号。(对于存在多路视频流的设备，如NVR设备，与设备实际视频流通道号对应)
                     * 
                     */
                    void SetChnNum(const int64_t& _chnNum);

                    /**
                     * 判断参数 ChnNum 是否已赋值
                     * @return ChnNum 是否已赋值
                     * 
                     */
                    bool ChnNumHasBeenSet() const;

                    /**
                     * 获取设备主人用户在IoT Video平台的注册ID。该参数用于验证Paas/Saas平台的设备/用户关系链是否一致
                     * @return AccessId 设备主人用户在IoT Video平台的注册ID。该参数用于验证Paas/Saas平台的设备/用户关系链是否一致
                     * 
                     */
                    std::string GetAccessId() const;

                    /**
                     * 设置设备主人用户在IoT Video平台的注册ID。该参数用于验证Paas/Saas平台的设备/用户关系链是否一致
                     * @param _accessId 设备主人用户在IoT Video平台的注册ID。该参数用于验证Paas/Saas平台的设备/用户关系链是否一致
                     * 
                     */
                    void SetAccessId(const std::string& _accessId);

                    /**
                     * 判断参数 AccessId 是否已赋值
                     * @return AccessId 是否已赋值
                     * 
                     */
                    bool AccessIdHasBeenSet() const;

                    /**
                     * 获取服务生效时间,若不指定此参数，服务立即生效
                     * @return EnableTime 服务生效时间,若不指定此参数，服务立即生效
                     * 
                     */
                    int64_t GetEnableTime() const;

                    /**
                     * 设置服务生效时间,若不指定此参数，服务立即生效
                     * @param _enableTime 服务生效时间,若不指定此参数，服务立即生效
                     * 
                     */
                    void SetEnableTime(const int64_t& _enableTime);

                    /**
                     * 判断参数 EnableTime 是否已赋值
                     * @return EnableTime 是否已赋值
                     * 
                     */
                    bool EnableTimeHasBeenSet() const;

                private:

                    /**
                     * 云存套餐ID：
yc1m3d ： 全时3天存储月套餐。
yc1m7d ： 全时7天存储月套餐。
yc1m30d ：全时30天存储月套餐。
yc1y3d ：全时3天存储年套餐。
yc1y7d ：全时7天存储年套餐。
yc1y30d ：全时30天存储年套餐。
ye1m3d ：事件3天存储月套餐。
ye1m7d ：事件7天存储月套餐。
ye1m30d ：事件30天存储月套餐 。
ye1y3d ：事件3天存储年套餐。
ye1y7d ：事件7天存储年套餐。
ye1y30d ：事件30天存储年套餐。
yc1w7d : 全时7天存储周套餐。
ye1w7d : 事件7天存储周套餐。
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 设备TID
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 订单数量,可一次性创建多个订单
                     */
                    int64_t m_orderCount;
                    bool m_orderCountHasBeenSet;

                    /**
                     * 云存服务所在的区域,如ap-guangzhou,ap-singapore, na-siliconvalley, eu-frankfurt
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * 视频流通道号。(对于存在多路视频流的设备，如NVR设备，与设备实际视频流通道号对应)
                     */
                    int64_t m_chnNum;
                    bool m_chnNumHasBeenSet;

                    /**
                     * 设备主人用户在IoT Video平台的注册ID。该参数用于验证Paas/Saas平台的设备/用户关系链是否一致
                     */
                    std::string m_accessId;
                    bool m_accessIdHasBeenSet;

                    /**
                     * 服务生效时间,若不指定此参数，服务立即生效
                     */
                    int64_t m_enableTime;
                    bool m_enableTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATESTORAGESERVICEREQUEST_H_
