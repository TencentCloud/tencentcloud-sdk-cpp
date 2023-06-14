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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_ARRIVEDMALLINFO_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_ARRIVEDMALLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 客户到场信息
                */
                class ArrivedMallInfo : public AbstractModel
                {
                public:
                    ArrivedMallInfo();
                    ~ArrivedMallInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取到场时间
                     * @return ArrivedTime 到场时间
                     * 
                     */
                    std::string GetArrivedTime() const;

                    /**
                     * 设置到场时间
                     * @param _arrivedTime 到场时间
                     * 
                     */
                    void SetArrivedTime(const std::string& _arrivedTime);

                    /**
                     * 判断参数 ArrivedTime 是否已赋值
                     * @return ArrivedTime 是否已赋值
                     * 
                     */
                    bool ArrivedTimeHasBeenSet() const;

                    /**
                     * 获取出场时间
                     * @return LeaveTime 出场时间
                     * 
                     */
                    std::string GetLeaveTime() const;

                    /**
                     * 设置出场时间
                     * @param _leaveTime 出场时间
                     * 
                     */
                    void SetLeaveTime(const std::string& _leaveTime);

                    /**
                     * 判断参数 LeaveTime 是否已赋值
                     * @return LeaveTime 是否已赋值
                     * 
                     */
                    bool LeaveTimeHasBeenSet() const;

                    /**
                     * 获取停留时间，秒
                     * @return StaySecond 停留时间，秒
                     * 
                     */
                    uint64_t GetStaySecond() const;

                    /**
                     * 设置停留时间，秒
                     * @param _staySecond 停留时间，秒
                     * 
                     */
                    void SetStaySecond(const uint64_t& _staySecond);

                    /**
                     * 判断参数 StaySecond 是否已赋值
                     * @return StaySecond 是否已赋值
                     * 
                     */
                    bool StaySecondHasBeenSet() const;

                    /**
                     * 获取到场抓拍图片
                     * @return InCapPic 到场抓拍图片
                     * 
                     */
                    std::string GetInCapPic() const;

                    /**
                     * 设置到场抓拍图片
                     * @param _inCapPic 到场抓拍图片
                     * 
                     */
                    void SetInCapPic(const std::string& _inCapPic);

                    /**
                     * 判断参数 InCapPic 是否已赋值
                     * @return InCapPic 是否已赋值
                     * 
                     */
                    bool InCapPicHasBeenSet() const;

                    /**
                     * 获取出场抓拍图片
                     * @return OutCapPic 出场抓拍图片
                     * 
                     */
                    std::string GetOutCapPic() const;

                    /**
                     * 设置出场抓拍图片
                     * @param _outCapPic 出场抓拍图片
                     * 
                     */
                    void SetOutCapPic(const std::string& _outCapPic);

                    /**
                     * 判断参数 OutCapPic 是否已赋值
                     * @return OutCapPic 是否已赋值
                     * 
                     */
                    bool OutCapPicHasBeenSet() const;

                    /**
                     * 获取轨迹编码
                     * @return TraceId 轨迹编码
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置轨迹编码
                     * @param _traceId 轨迹编码
                     * 
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                private:

                    /**
                     * 到场时间
                     */
                    std::string m_arrivedTime;
                    bool m_arrivedTimeHasBeenSet;

                    /**
                     * 出场时间
                     */
                    std::string m_leaveTime;
                    bool m_leaveTimeHasBeenSet;

                    /**
                     * 停留时间，秒
                     */
                    uint64_t m_staySecond;
                    bool m_staySecondHasBeenSet;

                    /**
                     * 到场抓拍图片
                     */
                    std::string m_inCapPic;
                    bool m_inCapPicHasBeenSet;

                    /**
                     * 出场抓拍图片
                     */
                    std::string m_outCapPic;
                    bool m_outCapPicHasBeenSet;

                    /**
                     * 轨迹编码
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_ARRIVEDMALLINFO_H_
