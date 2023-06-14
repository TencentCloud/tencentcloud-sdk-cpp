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

#ifndef TENCENTCLOUD_IC_V20190307_MODEL_PAYFOREXTENDDATAREQUEST_H_
#define TENCENTCLOUD_IC_V20190307_MODEL_PAYFOREXTENDDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ic
    {
        namespace V20190307
        {
            namespace Model
            {
                /**
                * PayForExtendData请求参数结构体
                */
                class PayForExtendDataRequest : public AbstractModel
                {
                public:
                    PayForExtendDataRequest();
                    ~PayForExtendDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取卡片ICCID
                     * @return Iccid 卡片ICCID
                     * 
                     */
                    std::string GetIccid() const;

                    /**
                     * 设置卡片ICCID
                     * @param _iccid 卡片ICCID
                     * 
                     */
                    void SetIccid(const std::string& _iccid);

                    /**
                     * 判断参数 Iccid 是否已赋值
                     * @return Iccid 是否已赋值
                     * 
                     */
                    bool IccidHasBeenSet() const;

                    /**
                     * 获取套外流量,单位MB
                     * @return ExtentData 套外流量,单位MB
                     * 
                     */
                    uint64_t GetExtentData() const;

                    /**
                     * 设置套外流量,单位MB
                     * @param _extentData 套外流量,单位MB
                     * 
                     */
                    void SetExtentData(const uint64_t& _extentData);

                    /**
                     * 判断参数 ExtentData 是否已赋值
                     * @return ExtentData 是否已赋值
                     * 
                     */
                    bool ExtentDataHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return Sdkappid 应用ID
                     * 
                     */
                    uint64_t GetSdkappid() const;

                    /**
                     * 设置应用ID
                     * @param _sdkappid 应用ID
                     * 
                     */
                    void SetSdkappid(const uint64_t& _sdkappid);

                    /**
                     * 判断参数 Sdkappid 是否已赋值
                     * @return Sdkappid 是否已赋值
                     * 
                     */
                    bool SdkappidHasBeenSet() const;

                private:

                    /**
                     * 卡片ICCID
                     */
                    std::string m_iccid;
                    bool m_iccidHasBeenSet;

                    /**
                     * 套外流量,单位MB
                     */
                    uint64_t m_extentData;
                    bool m_extentDataHasBeenSet;

                    /**
                     * 应用ID
                     */
                    uint64_t m_sdkappid;
                    bool m_sdkappidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IC_V20190307_MODEL_PAYFOREXTENDDATAREQUEST_H_
