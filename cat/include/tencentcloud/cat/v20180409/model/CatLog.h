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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_CATLOG_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_CATLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 拨测记录
                */
                class CatLog : public AbstractModel
                {
                public:
                    CatLog();
                    ~CatLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取拨测时间点
                     * @return Time 拨测时间点
                     */
                    std::string GetTime() const;

                    /**
                     * 设置拨测时间点
                     * @param Time 拨测时间点
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取拨测类型
                     * @return CatTypeName 拨测类型
                     */
                    std::string GetCatTypeName() const;

                    /**
                     * 设置拨测类型
                     * @param CatTypeName 拨测类型
                     */
                    void SetCatTypeName(const std::string& _catTypeName);

                    /**
                     * 判断参数 CatTypeName 是否已赋值
                     * @return CatTypeName 是否已赋值
                     */
                    bool CatTypeNameHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param TaskId 任务ID
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取拨测点所在城市
                     * @return City 拨测点所在城市
                     */
                    std::string GetCity() const;

                    /**
                     * 设置拨测点所在城市
                     * @param City 拨测点所在城市
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取拨测点所在运营商
                     * @return Isp 拨测点所在运营商
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置拨测点所在运营商
                     * @param Isp 拨测点所在运营商
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取被拨测Server的IP
                     * @return ServerIp 被拨测Server的IP
                     */
                    std::string GetServerIp() const;

                    /**
                     * 设置被拨测Server的IP
                     * @param ServerIp 被拨测Server的IP
                     */
                    void SetServerIp(const std::string& _serverIp);

                    /**
                     * 判断参数 ServerIp 是否已赋值
                     * @return ServerIp 是否已赋值
                     */
                    bool ServerIpHasBeenSet() const;

                    /**
                     * 获取被拨测Server的域名
                     * @return DomainName 被拨测Server的域名
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置被拨测Server的域名
                     * @param DomainName 被拨测Server的域名
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取执行耗时，单位毫秒
                     * @return TotalTime 执行耗时，单位毫秒
                     */
                    uint64_t GetTotalTime() const;

                    /**
                     * 设置执行耗时，单位毫秒
                     * @param TotalTime 执行耗时，单位毫秒
                     */
                    void SetTotalTime(const uint64_t& _totalTime);

                    /**
                     * 判断参数 TotalTime 是否已赋值
                     * @return TotalTime 是否已赋值
                     */
                    bool TotalTimeHasBeenSet() const;

                    /**
                     * 获取成功失败(1 失败，0 成功）
                     * @return ResultType 成功失败(1 失败，0 成功）
                     */
                    uint64_t GetResultType() const;

                    /**
                     * 设置成功失败(1 失败，0 成功）
                     * @param ResultType 成功失败(1 失败，0 成功）
                     */
                    void SetResultType(const uint64_t& _resultType);

                    /**
                     * 判断参数 ResultType 是否已赋值
                     * @return ResultType 是否已赋值
                     */
                    bool ResultTypeHasBeenSet() const;

                    /**
                     * 获取失败错误码
                     * @return ResultCode 失败错误码
                     */
                    uint64_t GetResultCode() const;

                    /**
                     * 设置失败错误码
                     * @param ResultCode 失败错误码
                     */
                    void SetResultCode(const uint64_t& _resultCode);

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     */
                    bool ResultCodeHasBeenSet() const;

                    /**
                     * 获取请求包大小
                     * @return ReqPkgSize 请求包大小
                     */
                    uint64_t GetReqPkgSize() const;

                    /**
                     * 设置请求包大小
                     * @param ReqPkgSize 请求包大小
                     */
                    void SetReqPkgSize(const uint64_t& _reqPkgSize);

                    /**
                     * 判断参数 ReqPkgSize 是否已赋值
                     * @return ReqPkgSize 是否已赋值
                     */
                    bool ReqPkgSizeHasBeenSet() const;

                    /**
                     * 获取回应包大小
                     * @return RspPkgSize 回应包大小
                     */
                    uint64_t GetRspPkgSize() const;

                    /**
                     * 设置回应包大小
                     * @param RspPkgSize 回应包大小
                     */
                    void SetRspPkgSize(const uint64_t& _rspPkgSize);

                    /**
                     * 判断参数 RspPkgSize 是否已赋值
                     * @return RspPkgSize 是否已赋值
                     */
                    bool RspPkgSizeHasBeenSet() const;

                    /**
                     * 获取拨测请求
                     * @return ReqMsg 拨测请求
                     */
                    std::string GetReqMsg() const;

                    /**
                     * 设置拨测请求
                     * @param ReqMsg 拨测请求
                     */
                    void SetReqMsg(const std::string& _reqMsg);

                    /**
                     * 判断参数 ReqMsg 是否已赋值
                     * @return ReqMsg 是否已赋值
                     */
                    bool ReqMsgHasBeenSet() const;

                    /**
                     * 获取拨测回应
                     * @return RespMsg 拨测回应
                     */
                    std::string GetRespMsg() const;

                    /**
                     * 设置拨测回应
                     * @param RespMsg 拨测回应
                     */
                    void SetRespMsg(const std::string& _respMsg);

                    /**
                     * 判断参数 RespMsg 是否已赋值
                     * @return RespMsg 是否已赋值
                     */
                    bool RespMsgHasBeenSet() const;

                    /**
                     * 获取客户端IP
                     * @return ClientIp 客户端IP
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置客户端IP
                     * @param ClientIp 客户端IP
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取拨测点所在城市名称
                     * @return CityName 拨测点所在城市名称
                     */
                    std::string GetCityName() const;

                    /**
                     * 设置拨测点所在城市名称
                     * @param CityName 拨测点所在城市名称
                     */
                    void SetCityName(const std::string& _cityName);

                    /**
                     * 判断参数 CityName 是否已赋值
                     * @return CityName 是否已赋值
                     */
                    bool CityNameHasBeenSet() const;

                    /**
                     * 获取拨测点所在运营商名称
                     * @return IspName 拨测点所在运营商名称
                     */
                    std::string GetIspName() const;

                    /**
                     * 设置拨测点所在运营商名称
                     * @param IspName 拨测点所在运营商名称
                     */
                    void SetIspName(const std::string& _ispName);

                    /**
                     * 判断参数 IspName 是否已赋值
                     * @return IspName 是否已赋值
                     */
                    bool IspNameHasBeenSet() const;

                    /**
                     * 获取解析耗时，单位毫秒
                     * @return ParseTime 解析耗时，单位毫秒
                     */
                    uint64_t GetParseTime() const;

                    /**
                     * 设置解析耗时，单位毫秒
                     * @param ParseTime 解析耗时，单位毫秒
                     */
                    void SetParseTime(const uint64_t& _parseTime);

                    /**
                     * 判断参数 ParseTime 是否已赋值
                     * @return ParseTime 是否已赋值
                     */
                    bool ParseTimeHasBeenSet() const;

                    /**
                     * 获取连接耗时，单位毫秒
                     * @return ConnectTime 连接耗时，单位毫秒
                     */
                    uint64_t GetConnectTime() const;

                    /**
                     * 设置连接耗时，单位毫秒
                     * @param ConnectTime 连接耗时，单位毫秒
                     */
                    void SetConnectTime(const uint64_t& _connectTime);

                    /**
                     * 判断参数 ConnectTime 是否已赋值
                     * @return ConnectTime 是否已赋值
                     */
                    bool ConnectTimeHasBeenSet() const;

                    /**
                     * 获取数据发送耗时，单位毫秒
                     * @return SendTime 数据发送耗时，单位毫秒
                     */
                    uint64_t GetSendTime() const;

                    /**
                     * 设置数据发送耗时，单位毫秒
                     * @param SendTime 数据发送耗时，单位毫秒
                     */
                    void SetSendTime(const uint64_t& _sendTime);

                    /**
                     * 判断参数 SendTime 是否已赋值
                     * @return SendTime 是否已赋值
                     */
                    bool SendTimeHasBeenSet() const;

                    /**
                     * 获取等待耗时，单位毫秒
                     * @return WaitTime 等待耗时，单位毫秒
                     */
                    uint64_t GetWaitTime() const;

                    /**
                     * 设置等待耗时，单位毫秒
                     * @param WaitTime 等待耗时，单位毫秒
                     */
                    void SetWaitTime(const uint64_t& _waitTime);

                    /**
                     * 判断参数 WaitTime 是否已赋值
                     * @return WaitTime 是否已赋值
                     */
                    bool WaitTimeHasBeenSet() const;

                    /**
                     * 获取接收耗时，单位毫秒
                     * @return ReceiveTime 接收耗时，单位毫秒
                     */
                    uint64_t GetReceiveTime() const;

                    /**
                     * 设置接收耗时，单位毫秒
                     * @param ReceiveTime 接收耗时，单位毫秒
                     */
                    void SetReceiveTime(const uint64_t& _receiveTime);

                    /**
                     * 判断参数 ReceiveTime 是否已赋值
                     * @return ReceiveTime 是否已赋值
                     */
                    bool ReceiveTimeHasBeenSet() const;

                private:

                    /**
                     * 拨测时间点
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 拨测类型
                     */
                    std::string m_catTypeName;
                    bool m_catTypeNameHasBeenSet;

                    /**
                     * 任务ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 拨测点所在城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 拨测点所在运营商
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * 被拨测Server的IP
                     */
                    std::string m_serverIp;
                    bool m_serverIpHasBeenSet;

                    /**
                     * 被拨测Server的域名
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 执行耗时，单位毫秒
                     */
                    uint64_t m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * 成功失败(1 失败，0 成功）
                     */
                    uint64_t m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * 失败错误码
                     */
                    uint64_t m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * 请求包大小
                     */
                    uint64_t m_reqPkgSize;
                    bool m_reqPkgSizeHasBeenSet;

                    /**
                     * 回应包大小
                     */
                    uint64_t m_rspPkgSize;
                    bool m_rspPkgSizeHasBeenSet;

                    /**
                     * 拨测请求
                     */
                    std::string m_reqMsg;
                    bool m_reqMsgHasBeenSet;

                    /**
                     * 拨测回应
                     */
                    std::string m_respMsg;
                    bool m_respMsgHasBeenSet;

                    /**
                     * 客户端IP
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 拨测点所在城市名称
                     */
                    std::string m_cityName;
                    bool m_cityNameHasBeenSet;

                    /**
                     * 拨测点所在运营商名称
                     */
                    std::string m_ispName;
                    bool m_ispNameHasBeenSet;

                    /**
                     * 解析耗时，单位毫秒
                     */
                    uint64_t m_parseTime;
                    bool m_parseTimeHasBeenSet;

                    /**
                     * 连接耗时，单位毫秒
                     */
                    uint64_t m_connectTime;
                    bool m_connectTimeHasBeenSet;

                    /**
                     * 数据发送耗时，单位毫秒
                     */
                    uint64_t m_sendTime;
                    bool m_sendTimeHasBeenSet;

                    /**
                     * 等待耗时，单位毫秒
                     */
                    uint64_t m_waitTime;
                    bool m_waitTimeHasBeenSet;

                    /**
                     * 接收耗时，单位毫秒
                     */
                    uint64_t m_receiveTime;
                    bool m_receiveTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_CATLOG_H_
