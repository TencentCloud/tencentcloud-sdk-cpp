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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeSlowLogs请求参数结构体
                */
                class DescribeSlowLogsRequest : public AbstractModel
                {
                public:
                    DescribeSlowLogsRequest();
                    ~DescribeSlowLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB for MySQL，默认为"mysql"。
                     * @return Product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB for MySQL，默认为"mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB for MySQL，默认为"mysql"。
                     * @param _product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB for MySQL，默认为"mysql"。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取实例id。
                     * @return InstanceId 实例id。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id。
                     * @param _instanceId 实例id。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取sql模板的md5值
                     * @return Md5 sql模板的md5值
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置sql模板的md5值
                     * @param _md5 sql模板的md5值
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取开始时间，如“2019-09-10 12:13:14”。
                     * @return StartTime 开始时间，如“2019-09-10 12:13:14”。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，如“2019-09-10 12:13:14”。
                     * @param _startTime 开始时间，如“2019-09-10 12:13:14”。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。
                     * @return EndTime 截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。
                     * @param _endTime 截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取查询数目，默认为20，最大为100。
                     * @return Limit 查询数目，默认为20，最大为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询数目，默认为20，最大为100。
                     * @param _limit 查询数目，默认为20，最大为100。
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
                     * 获取数据库列表
                     * @return DB 数据库列表
                     * 
                     */
                    std::vector<std::string> GetDB() const;

                    /**
                     * 设置数据库列表
                     * @param _dB 数据库列表
                     * 
                     */
                    void SetDB(const std::vector<std::string>& _dB);

                    /**
                     * 判断参数 DB 是否已赋值
                     * @return DB 是否已赋值
                     * 
                     */
                    bool DBHasBeenSet() const;

                    /**
                     * 获取关键字
                     * @return Key 关键字
                     * 
                     */
                    std::vector<std::string> GetKey() const;

                    /**
                     * 设置关键字
                     * @param _key 关键字
                     * 
                     */
                    void SetKey(const std::vector<std::string>& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取用户
                     * @return User 用户
                     * 
                     */
                    std::vector<std::string> GetUser() const;

                    /**
                     * 设置用户
                     * @param _user 用户
                     * 
                     */
                    void SetUser(const std::vector<std::string>& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取IP
                     * @return Ip IP
                     * 
                     */
                    std::vector<std::string> GetIp() const;

                    /**
                     * 设置IP
                     * @param _ip IP
                     * 
                     */
                    void SetIp(const std::vector<std::string>& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取耗时区间,耗时区间的左右边界分别对应数组的第0个元素和第一个元素
                     * @return Time 耗时区间,耗时区间的左右边界分别对应数组的第0个元素和第一个元素
                     * 
                     */
                    std::vector<int64_t> GetTime() const;

                    /**
                     * 设置耗时区间,耗时区间的左右边界分别对应数组的第0个元素和第一个元素
                     * @param _time 耗时区间,耗时区间的左右边界分别对应数组的第0个元素和第一个元素
                     * 
                     */
                    void SetTime(const std::vector<int64_t>& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                private:

                    /**
                     * 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB for MySQL，默认为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 实例id。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * sql模板的md5值
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 开始时间，如“2019-09-10 12:13:14”。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询数目，默认为20，最大为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 数据库列表
                     */
                    std::vector<std::string> m_dB;
                    bool m_dBHasBeenSet;

                    /**
                     * 关键字
                     */
                    std::vector<std::string> m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 用户
                     */
                    std::vector<std::string> m_user;
                    bool m_userHasBeenSet;

                    /**
                     * IP
                     */
                    std::vector<std::string> m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 耗时区间,耗时区间的左右边界分别对应数组的第0个元素和第一个元素
                     */
                    std::vector<int64_t> m_time;
                    bool m_timeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGSREQUEST_H_
