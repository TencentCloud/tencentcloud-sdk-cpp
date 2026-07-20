/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AUDITLOG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AUDITLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AccountInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 操作日志
                */
                class AuditLog : public AbstractModel
                {
                public:
                    AuditLog();
                    ~AuditLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>员工信息</p>
                     * @return AccountInfo <p>员工信息</p>
                     * 
                     */
                    AccountInfo GetAccountInfo() const;

                    /**
                     * 设置<p>员工信息</p>
                     * @param _accountInfo <p>员工信息</p>
                     * 
                     */
                    void SetAccountInfo(const AccountInfo& _accountInfo);

                    /**
                     * 判断参数 AccountInfo 是否已赋值
                     * @return AccountInfo 是否已赋值
                     * 
                     */
                    bool AccountInfoHasBeenSet() const;

                    /**
                     * 获取<p>应用业务id</p>
                     * @return AppId <p>应用业务id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用业务id</p>
                     * @param _appId <p>应用业务id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>应用名称</p><p>操作日志触发时的名称</p>
                     * @return AppName <p>应用名称</p><p>操作日志触发时的名称</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>应用名称</p><p>操作日志触发时的名称</p>
                     * @param _appName <p>应用名称</p><p>操作日志触发时的名称</p>
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
                     * 获取<p>操作时间</p><p>参数格式：秒时间戳</p>
                     * @return OperateTime <p>操作时间</p><p>参数格式：秒时间戳</p>
                     * 
                     */
                    std::string GetOperateTime() const;

                    /**
                     * 设置<p>操作时间</p><p>参数格式：秒时间戳</p>
                     * @param _operateTime <p>操作时间</p><p>参数格式：秒时间戳</p>
                     * 
                     */
                    void SetOperateTime(const std::string& _operateTime);

                    /**
                     * 判断参数 OperateTime 是否已赋值
                     * @return OperateTime 是否已赋值
                     * 
                     */
                    bool OperateTimeHasBeenSet() const;

                    /**
                     * 获取<p>操作类型</p>
                     * @return Action <p>操作类型</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>操作类型</p>
                     * @param _action <p>操作类型</p>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>操作对象</p>
                     * @return Biz <p>操作对象</p>
                     * 
                     */
                    std::string GetBiz() const;

                    /**
                     * 设置<p>操作对象</p>
                     * @param _biz <p>操作对象</p>
                     * 
                     */
                    void SetBiz(const std::string& _biz);

                    /**
                     * 判断参数 Biz 是否已赋值
                     * @return Biz 是否已赋值
                     * 
                     */
                    bool BizHasBeenSet() const;

                    /**
                     * 获取<p>操作内容</p>
                     * @return Content <p>操作内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>操作内容</p>
                     * @param _content <p>操作内容</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>操作唯一ID</p>
                     * @return UniqueId <p>操作唯一ID</p>
                     * 
                     */
                    std::string GetUniqueId() const;

                    /**
                     * 设置<p>操作唯一ID</p>
                     * @param _uniqueId <p>操作唯一ID</p>
                     * 
                     */
                    void SetUniqueId(const std::string& _uniqueId);

                    /**
                     * 判断参数 UniqueId 是否已赋值
                     * @return UniqueId 是否已赋值
                     * 
                     */
                    bool UniqueIdHasBeenSet() const;

                private:

                    /**
                     * <p>员工信息</p>
                     */
                    AccountInfo m_accountInfo;
                    bool m_accountInfoHasBeenSet;

                    /**
                     * <p>应用业务id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>应用名称</p><p>操作日志触发时的名称</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>操作时间</p><p>参数格式：秒时间戳</p>
                     */
                    std::string m_operateTime;
                    bool m_operateTimeHasBeenSet;

                    /**
                     * <p>操作类型</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>操作对象</p>
                     */
                    std::string m_biz;
                    bool m_bizHasBeenSet;

                    /**
                     * <p>操作内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>操作唯一ID</p>
                     */
                    std::string m_uniqueId;
                    bool m_uniqueIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AUDITLOG_H_
