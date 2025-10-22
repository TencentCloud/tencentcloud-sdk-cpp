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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDSUBSCRIBEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDSUBSCRIBEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DashboardSubscribeData.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 仪表盘订阅信息
                */
                class DashboardSubscribeInfo : public AbstractModel
                {
                public:
                    DashboardSubscribeInfo();
                    ~DashboardSubscribeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仪表盘订阅id。
                     * @return Id 仪表盘订阅id。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置仪表盘订阅id。
                     * @param _id 仪表盘订阅id。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取仪表盘订阅名称。
                     * @return Name 仪表盘订阅名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置仪表盘订阅名称。
                     * @param _name 仪表盘订阅名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取仪表盘id。
                     * @return DashboardId 仪表盘id。
                     * 
                     */
                    std::string GetDashboardId() const;

                    /**
                     * 设置仪表盘id。
                     * @param _dashboardId 仪表盘id。
                     * 
                     */
                    void SetDashboardId(const std::string& _dashboardId);

                    /**
                     * 判断参数 DashboardId 是否已赋值
                     * @return DashboardId 是否已赋值
                     * 
                     */
                    bool DashboardIdHasBeenSet() const;

                    /**
                     * 获取仪表盘订阅时间。
                     * @return Cron 仪表盘订阅时间。
                     * 
                     */
                    std::string GetCron() const;

                    /**
                     * 设置仪表盘订阅时间。
                     * @param _cron 仪表盘订阅时间。
                     * 
                     */
                    void SetCron(const std::string& _cron);

                    /**
                     * 判断参数 Cron 是否已赋值
                     * @return Cron 是否已赋值
                     * 
                     */
                    bool CronHasBeenSet() const;

                    /**
                     * 获取仪表盘订阅数据。
                     * @return SubscribeData 仪表盘订阅数据。
                     * 
                     */
                    DashboardSubscribeData GetSubscribeData() const;

                    /**
                     * 设置仪表盘订阅数据。
                     * @param _subscribeData 仪表盘订阅数据。
                     * 
                     */
                    void SetSubscribeData(const DashboardSubscribeData& _subscribeData);

                    /**
                     * 判断参数 SubscribeData 是否已赋值
                     * @return SubscribeData 是否已赋值
                     * 
                     */
                    bool SubscribeDataHasBeenSet() const;

                    /**
                     * 获取仪表盘订阅记录创建时间。格式：`YYYY-MM-DD HH:MM:SS`
                     * @return CreateTime 仪表盘订阅记录创建时间。格式：`YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置仪表盘订阅记录创建时间。格式：`YYYY-MM-DD HH:MM:SS`
                     * @param _createTime 仪表盘订阅记录创建时间。格式：`YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取仪表盘订阅记录更新时间。格式：`YYYY-MM-DD HH:MM:SS`
                     * @return UpdateTime 仪表盘订阅记录更新时间。格式：`YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置仪表盘订阅记录更新时间。格式：`YYYY-MM-DD HH:MM:SS`
                     * @param _updateTime 仪表盘订阅记录更新时间。格式：`YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取仪表盘订阅记录最后一次发送成功时间。格式：`YYYY-MM-DD HH:MM:SS`
                     * @return LastTime 仪表盘订阅记录最后一次发送成功时间。格式：`YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置仪表盘订阅记录最后一次发送成功时间。格式：`YYYY-MM-DD HH:MM:SS`
                     * @param _lastTime 仪表盘订阅记录最后一次发送成功时间。格式：`YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取腾讯云主账号Id。
                     * @return Uin 腾讯云主账号Id。
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置腾讯云主账号Id。
                     * @param _uin 腾讯云主账号Id。
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取腾讯云主账号下的子账号Id。
                     * @return SubUin 腾讯云主账号下的子账号Id。
                     * 
                     */
                    uint64_t GetSubUin() const;

                    /**
                     * 设置腾讯云主账号下的子账号Id。
                     * @param _subUin 腾讯云主账号下的子账号Id。
                     * 
                     */
                    void SetSubUin(const uint64_t& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取仪表盘订阅记录最后一次发送的状态。success：全部发送成功，fail：未发送， partialSuccess：部分发送成功。
                     * @return LastStatus 仪表盘订阅记录最后一次发送的状态。success：全部发送成功，fail：未发送， partialSuccess：部分发送成功。
                     * 
                     */
                    std::string GetLastStatus() const;

                    /**
                     * 设置仪表盘订阅记录最后一次发送的状态。success：全部发送成功，fail：未发送， partialSuccess：部分发送成功。
                     * @param _lastStatus 仪表盘订阅记录最后一次发送的状态。success：全部发送成功，fail：未发送， partialSuccess：部分发送成功。
                     * 
                     */
                    void SetLastStatus(const std::string& _lastStatus);

                    /**
                     * 判断参数 LastStatus 是否已赋值
                     * @return LastStatus 是否已赋值
                     * 
                     */
                    bool LastStatusHasBeenSet() const;

                private:

                    /**
                     * 仪表盘订阅id。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 仪表盘订阅名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 仪表盘id。
                     */
                    std::string m_dashboardId;
                    bool m_dashboardIdHasBeenSet;

                    /**
                     * 仪表盘订阅时间。
                     */
                    std::string m_cron;
                    bool m_cronHasBeenSet;

                    /**
                     * 仪表盘订阅数据。
                     */
                    DashboardSubscribeData m_subscribeData;
                    bool m_subscribeDataHasBeenSet;

                    /**
                     * 仪表盘订阅记录创建时间。格式：`YYYY-MM-DD HH:MM:SS`
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 仪表盘订阅记录更新时间。格式：`YYYY-MM-DD HH:MM:SS`
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 仪表盘订阅记录最后一次发送成功时间。格式：`YYYY-MM-DD HH:MM:SS`
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 腾讯云主账号Id。
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 腾讯云主账号下的子账号Id。
                     */
                    uint64_t m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 仪表盘订阅记录最后一次发送的状态。success：全部发送成功，fail：未发送， partialSuccess：部分发送成功。
                     */
                    std::string m_lastStatus;
                    bool m_lastStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDSUBSCRIBEINFO_H_
