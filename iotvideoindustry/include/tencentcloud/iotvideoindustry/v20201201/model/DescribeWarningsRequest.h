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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEWARNINGSREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEWARNINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeWarnings请求参数结构体
                */
                class DescribeWarningsRequest : public AbstractModel
                {
                public:
                    DescribeWarningsRequest();
                    ~DescribeWarningsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取1:创建时间倒序 2：创建时间升序 3：level倒序 4：leve升序
                     * @return OrderType 1:创建时间倒序 2：创建时间升序 3：level倒序 4：leve升序
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置1:创建时间倒序 2：创建时间升序 3：level倒序 4：leve升序
                     * @param _orderType 1:创建时间倒序 2：创建时间升序 3：level倒序 4：leve升序
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取可选设备id
                     * @return DeviceId 可选设备id
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置可选设备id
                     * @param _deviceId 可选设备id
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取如果不传则查询所有，取值参见配置
                     * @return WarnLevelArray 如果不传则查询所有，取值参见配置
                     * 
                     */
                    std::vector<int64_t> GetWarnLevelArray() const;

                    /**
                     * 设置如果不传则查询所有，取值参见配置
                     * @param _warnLevelArray 如果不传则查询所有，取值参见配置
                     * 
                     */
                    void SetWarnLevelArray(const std::vector<int64_t>& _warnLevelArray);

                    /**
                     * 判断参数 WarnLevelArray 是否已赋值
                     * @return WarnLevelArray 是否已赋值
                     * 
                     */
                    bool WarnLevelArrayHasBeenSet() const;

                    /**
                     * 获取如果不传则查询所有，取值参见配置
                     * @return WarnModeArray 如果不传则查询所有，取值参见配置
                     * 
                     */
                    std::vector<int64_t> GetWarnModeArray() const;

                    /**
                     * 设置如果不传则查询所有，取值参见配置
                     * @param _warnModeArray 如果不传则查询所有，取值参见配置
                     * 
                     */
                    void SetWarnModeArray(const std::vector<int64_t>& _warnModeArray);

                    /**
                     * 判断参数 WarnModeArray 是否已赋值
                     * @return WarnModeArray 是否已赋值
                     * 
                     */
                    bool WarnModeArrayHasBeenSet() const;

                    /**
                     * 获取不传认为是0
                     * @return Offset 不传认为是0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置不传认为是0
                     * @param _offset 不传认为是0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取不传认为是20
                     * @return Limit 不传认为是20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置不传认为是20
                     * @param _limit 不传认为是20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取形似：2021-05-21 00:00:00 .取值在当前日前30天内，不传默认是当前日前30天日期
                     * @return DateBegin 形似：2021-05-21 00:00:00 .取值在当前日前30天内，不传默认是当前日前30天日期
                     * 
                     */
                    std::string GetDateBegin() const;

                    /**
                     * 设置形似：2021-05-21 00:00:00 .取值在当前日前30天内，不传默认是当前日前30天日期
                     * @param _dateBegin 形似：2021-05-21 00:00:00 .取值在当前日前30天内，不传默认是当前日前30天日期
                     * 
                     */
                    void SetDateBegin(const std::string& _dateBegin);

                    /**
                     * 判断参数 DateBegin 是否已赋值
                     * @return DateBegin 是否已赋值
                     * 
                     */
                    bool DateBeginHasBeenSet() const;

                    /**
                     * 获取形似：2021-05-21 23:59:59 .取值在当前日前30天内，不传默认是当前日前30天日期
                     * @return DateEnd 形似：2021-05-21 23:59:59 .取值在当前日前30天内，不传默认是当前日前30天日期
                     * 
                     */
                    std::string GetDateEnd() const;

                    /**
                     * 设置形似：2021-05-21 23:59:59 .取值在当前日前30天内，不传默认是当前日前30天日期
                     * @param _dateEnd 形似：2021-05-21 23:59:59 .取值在当前日前30天内，不传默认是当前日前30天日期
                     * 
                     */
                    void SetDateEnd(const std::string& _dateEnd);

                    /**
                     * 判断参数 DateEnd 是否已赋值
                     * @return DateEnd 是否已赋值
                     * 
                     */
                    bool DateEndHasBeenSet() const;

                private:

                    /**
                     * 1:创建时间倒序 2：创建时间升序 3：level倒序 4：leve升序
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 可选设备id
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 如果不传则查询所有，取值参见配置
                     */
                    std::vector<int64_t> m_warnLevelArray;
                    bool m_warnLevelArrayHasBeenSet;

                    /**
                     * 如果不传则查询所有，取值参见配置
                     */
                    std::vector<int64_t> m_warnModeArray;
                    bool m_warnModeArrayHasBeenSet;

                    /**
                     * 不传认为是0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 不传认为是20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 形似：2021-05-21 00:00:00 .取值在当前日前30天内，不传默认是当前日前30天日期
                     */
                    std::string m_dateBegin;
                    bool m_dateBeginHasBeenSet;

                    /**
                     * 形似：2021-05-21 23:59:59 .取值在当前日前30天内，不传默认是当前日前30天日期
                     */
                    std::string m_dateEnd;
                    bool m_dateEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEWARNINGSREQUEST_H_
