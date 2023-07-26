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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_APPLETRESULT_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_APPLETRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/AppletInfo.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 渠道合作加固小程序加固结果
                */
                class AppletResult : public AbstractModel
                {
                public:
                    AppletResult();
                    ~AppletResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加固任务结果id
                     * @return ResultId 加固任务结果id
                     * 
                     */
                    std::string GetResultId() const;

                    /**
                     * 设置加固任务结果id
                     * @param _resultId 加固任务结果id
                     * 
                     */
                    void SetResultId(const std::string& _resultId);

                    /**
                     * 判断参数 ResultId 是否已赋值
                     * @return ResultId 是否已赋值
                     * 
                     */
                    bool ResultIdHasBeenSet() const;

                    /**
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
                     * @param _resourceId 资源id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取订单id
                     * @return OrderId 订单id
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单id
                     * @param _orderId 订单id
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取操作账号
                     * @return OpUin 操作账号
                     * 
                     */
                    int64_t GetOpUin() const;

                    /**
                     * 设置操作账号
                     * @param _opUin 操作账号
                     * 
                     */
                    void SetOpUin(const int64_t& _opUin);

                    /**
                     * 判断参数 OpUin 是否已赋值
                     * @return OpUin 是否已赋值
                     * 
                     */
                    bool OpUinHasBeenSet() const;

                    /**
                     * 获取加固结果
                     * @return EncryptState 加固结果
                     * 
                     */
                    int64_t GetEncryptState() const;

                    /**
                     * 设置加固结果
                     * @param _encryptState 加固结果
                     * 
                     */
                    void SetEncryptState(const int64_t& _encryptState);

                    /**
                     * 判断参数 EncryptState 是否已赋值
                     * @return EncryptState 是否已赋值
                     * 
                     */
                    bool EncryptStateHasBeenSet() const;

                    /**
                     * 获取加固结果描述
                     * @return EncryptStateDesc 加固结果描述
                     * 
                     */
                    std::string GetEncryptStateDesc() const;

                    /**
                     * 设置加固结果描述
                     * @param _encryptStateDesc 加固结果描述
                     * 
                     */
                    void SetEncryptStateDesc(const std::string& _encryptStateDesc);

                    /**
                     * 判断参数 EncryptStateDesc 是否已赋值
                     * @return EncryptStateDesc 是否已赋值
                     * 
                     */
                    bool EncryptStateDescHasBeenSet() const;

                    /**
                     * 获取失败错误码
                     * @return EncryptErrCode 失败错误码
                     * 
                     */
                    int64_t GetEncryptErrCode() const;

                    /**
                     * 设置失败错误码
                     * @param _encryptErrCode 失败错误码
                     * 
                     */
                    void SetEncryptErrCode(const int64_t& _encryptErrCode);

                    /**
                     * 判断参数 EncryptErrCode 是否已赋值
                     * @return EncryptErrCode 是否已赋值
                     * 
                     */
                    bool EncryptErrCodeHasBeenSet() const;

                    /**
                     * 获取失败原因
                     * @return EncryptErrDesc 失败原因
                     * 
                     */
                    std::string GetEncryptErrDesc() const;

                    /**
                     * 设置失败原因
                     * @param _encryptErrDesc 失败原因
                     * 
                     */
                    void SetEncryptErrDesc(const std::string& _encryptErrDesc);

                    /**
                     * 判断参数 EncryptErrDesc 是否已赋值
                     * @return EncryptErrDesc 是否已赋值
                     * 
                     */
                    bool EncryptErrDescHasBeenSet() const;

                    /**
                     * 获取解决方案
                     * @return EncryptErrRef 解决方案
                     * 
                     */
                    std::string GetEncryptErrRef() const;

                    /**
                     * 设置解决方案
                     * @param _encryptErrRef 解决方案
                     * 
                     */
                    void SetEncryptErrRef(const std::string& _encryptErrRef);

                    /**
                     * 判断参数 EncryptErrRef 是否已赋值
                     * @return EncryptErrRef 是否已赋值
                     * 
                     */
                    bool EncryptErrRefHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreatTime 任务创建时间
                     * 
                     */
                    std::string GetCreatTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _creatTime 任务创建时间
                     * 
                     */
                    void SetCreatTime(const std::string& _creatTime);

                    /**
                     * 判断参数 CreatTime 是否已赋值
                     * @return CreatTime 是否已赋值
                     * 
                     */
                    bool CreatTimeHasBeenSet() const;

                    /**
                     * 获取任务开始处理时间
                     * @return StartTime 任务开始处理时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始处理时间
                     * @param _startTime 任务开始处理时间
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
                     * 获取任务处理结束时间
                     * @return EndTime 任务处理结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务处理结束时间
                     * @param _endTime 任务处理结束时间
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
                     * 获取加固耗时（秒单位）
                     * @return CostTime 加固耗时（秒单位）
                     * 
                     */
                    int64_t GetCostTime() const;

                    /**
                     * 设置加固耗时（秒单位）
                     * @param _costTime 加固耗时（秒单位）
                     * 
                     */
                    void SetCostTime(const int64_t& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取在线加固成功下载包
                     * @return EncryptPkgUrl 在线加固成功下载包
                     * 
                     */
                    std::string GetEncryptPkgUrl() const;

                    /**
                     * 设置在线加固成功下载包
                     * @param _encryptPkgUrl 在线加固成功下载包
                     * 
                     */
                    void SetEncryptPkgUrl(const std::string& _encryptPkgUrl);

                    /**
                     * 判断参数 EncryptPkgUrl 是否已赋值
                     * @return EncryptPkgUrl 是否已赋值
                     * 
                     */
                    bool EncryptPkgUrlHasBeenSet() const;

                    /**
                     * 获取本次加固配置
                     * @return AppletInfo 本次加固配置
                     * 
                     */
                    AppletInfo GetAppletInfo() const;

                    /**
                     * 设置本次加固配置
                     * @param _appletInfo 本次加固配置
                     * 
                     */
                    void SetAppletInfo(const AppletInfo& _appletInfo);

                    /**
                     * 判断参数 AppletInfo 是否已赋值
                     * @return AppletInfo 是否已赋值
                     * 
                     */
                    bool AppletInfoHasBeenSet() const;

                private:

                    /**
                     * 加固任务结果id
                     */
                    std::string m_resultId;
                    bool m_resultIdHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 订单id
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 操作账号
                     */
                    int64_t m_opUin;
                    bool m_opUinHasBeenSet;

                    /**
                     * 加固结果
                     */
                    int64_t m_encryptState;
                    bool m_encryptStateHasBeenSet;

                    /**
                     * 加固结果描述
                     */
                    std::string m_encryptStateDesc;
                    bool m_encryptStateDescHasBeenSet;

                    /**
                     * 失败错误码
                     */
                    int64_t m_encryptErrCode;
                    bool m_encryptErrCodeHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_encryptErrDesc;
                    bool m_encryptErrDescHasBeenSet;

                    /**
                     * 解决方案
                     */
                    std::string m_encryptErrRef;
                    bool m_encryptErrRefHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_creatTime;
                    bool m_creatTimeHasBeenSet;

                    /**
                     * 任务开始处理时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务处理结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 加固耗时（秒单位）
                     */
                    int64_t m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * 在线加固成功下载包
                     */
                    std::string m_encryptPkgUrl;
                    bool m_encryptPkgUrlHasBeenSet;

                    /**
                     * 本次加固配置
                     */
                    AppletInfo m_appletInfo;
                    bool m_appletInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_APPLETRESULT_H_
