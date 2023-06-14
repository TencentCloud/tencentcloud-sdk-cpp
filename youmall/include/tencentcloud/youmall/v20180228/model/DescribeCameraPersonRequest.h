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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBECAMERAPERSONREQUEST_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBECAMERAPERSONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeCameraPerson请求参数结构体
                */
                class DescribeCameraPersonRequest : public AbstractModel
                {
                public:
                    DescribeCameraPersonRequest();
                    ~DescribeCameraPersonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * @return CompanyId 优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 设置优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * @param _companyId 优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * 
                     */
                    void SetCompanyId(const std::string& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取
                     * @return ShopId 优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取
                     * 
                     */
                    int64_t GetShopId() const;

                    /**
                     * 设置优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取
                     * @param _shopId 优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取
                     * 
                     */
                    void SetShopId(const int64_t& _shopId);

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取摄像头id
                     * @return CameraId 摄像头id
                     * 
                     */
                    int64_t GetCameraId() const;

                    /**
                     * 设置摄像头id
                     * @param _cameraId 摄像头id
                     * 
                     */
                    void SetCameraId(const int64_t& _cameraId);

                    /**
                     * 判断参数 CameraId 是否已赋值
                     * @return CameraId 是否已赋值
                     * 
                     */
                    bool CameraIdHasBeenSet() const;

                    /**
                     * 获取拉取开始时间戳，单位秒
                     * @return StartTime 拉取开始时间戳，单位秒
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置拉取开始时间戳，单位秒
                     * @param _startTime 拉取开始时间戳，单位秒
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取拉取结束时间戳，单位秒，不超过StartTime+10秒，超过默认为StartTime+10
                     * @return EndTime 拉取结束时间戳，单位秒，不超过StartTime+10秒，超过默认为StartTime+10
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置拉取结束时间戳，单位秒，不超过StartTime+10秒，超过默认为StartTime+10
                     * @param _endTime 拉取结束时间戳，单位秒，不超过StartTime+10秒，超过默认为StartTime+10
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取pos机id
                     * @return PosId pos机id
                     * 
                     */
                    std::string GetPosId() const;

                    /**
                     * 设置pos机id
                     * @param _posId pos机id
                     * 
                     */
                    void SetPosId(const std::string& _posId);

                    /**
                     * 判断参数 PosId 是否已赋值
                     * @return PosId 是否已赋值
                     * 
                     */
                    bool PosIdHasBeenSet() const;

                    /**
                     * 获取拉取图片数，默认为1，最大为3
                     * @return Num 拉取图片数，默认为1，最大为3
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置拉取图片数，默认为1，最大为3
                     * @param _num 拉取图片数，默认为1，最大为3
                     * 
                     */
                    void SetNum(const int64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取是否需要base64的图片，0-不需要，1-需要，默认0
                     * @return IsNeedPic 是否需要base64的图片，0-不需要，1-需要，默认0
                     * 
                     */
                    int64_t GetIsNeedPic() const;

                    /**
                     * 设置是否需要base64的图片，0-不需要，1-需要，默认0
                     * @param _isNeedPic 是否需要base64的图片，0-不需要，1-需要，默认0
                     * 
                     */
                    void SetIsNeedPic(const int64_t& _isNeedPic);

                    /**
                     * 判断参数 IsNeedPic 是否已赋值
                     * @return IsNeedPic 是否已赋值
                     * 
                     */
                    bool IsNeedPicHasBeenSet() const;

                private:

                    /**
                     * 优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取
                     */
                    int64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 摄像头id
                     */
                    int64_t m_cameraId;
                    bool m_cameraIdHasBeenSet;

                    /**
                     * 拉取开始时间戳，单位秒
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 拉取结束时间戳，单位秒，不超过StartTime+10秒，超过默认为StartTime+10
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * pos机id
                     */
                    std::string m_posId;
                    bool m_posIdHasBeenSet;

                    /**
                     * 拉取图片数，默认为1，最大为3
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * 是否需要base64的图片，0-不需要，1-需要，默认0
                     */
                    int64_t m_isNeedPic;
                    bool m_isNeedPicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBECAMERAPERSONREQUEST_H_
