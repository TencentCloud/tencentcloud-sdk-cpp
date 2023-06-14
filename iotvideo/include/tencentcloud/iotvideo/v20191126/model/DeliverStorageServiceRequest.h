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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DELIVERSTORAGESERVICEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DELIVERSTORAGESERVICEREQUEST_H_

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
                * DeliverStorageService请求参数结构体
                */
                class DeliverStorageServiceRequest : public AbstractModel
                {
                public:
                    DeliverStorageServiceRequest();
                    ~DeliverStorageServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待转移的源云存服务ID
                     * @return SrcServiceId 待转移的源云存服务ID
                     * 
                     */
                    std::string GetSrcServiceId() const;

                    /**
                     * 设置待转移的源云存服务ID
                     * @param _srcServiceId 待转移的源云存服务ID
                     * 
                     */
                    void SetSrcServiceId(const std::string& _srcServiceId);

                    /**
                     * 判断参数 SrcServiceId 是否已赋值
                     * @return SrcServiceId 是否已赋值
                     * 
                     */
                    bool SrcServiceIdHasBeenSet() const;

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

                private:

                    /**
                     * 待转移的源云存服务ID
                     */
                    std::string m_srcServiceId;
                    bool m_srcServiceIdHasBeenSet;

                    /**
                     * 设备TID
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DELIVERSTORAGESERVICEREQUEST_H_
