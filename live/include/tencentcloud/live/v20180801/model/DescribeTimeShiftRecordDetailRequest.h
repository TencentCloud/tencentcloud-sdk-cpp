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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTRECORDDETAILREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTRECORDDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeTimeShiftRecordDetail请求参数结构体
                */
                class DescribeTimeShiftRecordDetailRequest : public AbstractModel
                {
                public:
                    DescribeTimeShiftRecordDetailRequest();
                    ~DescribeTimeShiftRecordDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取推流域名。
                     * @return Domain 推流域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置推流域名。
                     * @param _domain 推流域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取推流路径。
                     * @return AppName 推流路径。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径。
                     * @param _appName 推流路径。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取流名称。
                     * @return StreamName 流名称。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
                     * @param _streamName 流名称。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取查询范围起始时间，Unix 时间戳。
                     * @return StartTime 查询范围起始时间，Unix 时间戳。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置查询范围起始时间，Unix 时间戳。
                     * @param _startTime 查询范围起始时间，Unix 时间戳。
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
                     * 获取查询范围终止时间，Unix 时间戳。 
                     * @return EndTime 查询范围终止时间，Unix 时间戳。 
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置查询范围终止时间，Unix 时间戳。 
                     * @param _endTime 查询范围终止时间，Unix 时间戳。 
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
                     * 获取推流域名所属组，没有域名组或者域名组为空字符串可不填。
                     * @return DomainGroup 推流域名所属组，没有域名组或者域名组为空字符串可不填。
                     * 
                     */
                    std::string GetDomainGroup() const;

                    /**
                     * 设置推流域名所属组，没有域名组或者域名组为空字符串可不填。
                     * @param _domainGroup 推流域名所属组，没有域名组或者域名组为空字符串可不填。
                     * 
                     */
                    void SetDomainGroup(const std::string& _domainGroup);

                    /**
                     * 判断参数 DomainGroup 是否已赋值
                     * @return DomainGroup 是否已赋值
                     * 
                     */
                    bool DomainGroupHasBeenSet() const;

                    /**
                     * 获取转码模板ID，转码模板ID为0可不填。
                     * @return TransCodeId 转码模板ID，转码模板ID为0可不填。
                     * 
                     */
                    uint64_t GetTransCodeId() const;

                    /**
                     * 设置转码模板ID，转码模板ID为0可不填。
                     * @param _transCodeId 转码模板ID，转码模板ID为0可不填。
                     * 
                     */
                    void SetTransCodeId(const uint64_t& _transCodeId);

                    /**
                     * 判断参数 TransCodeId 是否已赋值
                     * @return TransCodeId 是否已赋值
                     * 
                     */
                    bool TransCodeIdHasBeenSet() const;

                private:

                    /**
                     * 推流域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 推流路径。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 查询范围起始时间，Unix 时间戳。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询范围终止时间，Unix 时间戳。 
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 推流域名所属组，没有域名组或者域名组为空字符串可不填。
                     */
                    std::string m_domainGroup;
                    bool m_domainGroupHasBeenSet;

                    /**
                     * 转码模板ID，转码模板ID为0可不填。
                     */
                    uint64_t m_transCodeId;
                    bool m_transCodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTRECORDDETAILREQUEST_H_
