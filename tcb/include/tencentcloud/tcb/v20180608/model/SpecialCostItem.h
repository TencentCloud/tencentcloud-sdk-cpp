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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_SPECIALCOSTITEM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_SPECIALCOSTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 1分钱计费详情
                */
                class SpecialCostItem : public AbstractModel
                {
                public:
                    SpecialCostItem();
                    ~SpecialCostItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取上报日期
                     * @return ReportDate 上报日期
                     * 
                     */
                    std::string GetReportDate() const;

                    /**
                     * 设置上报日期
                     * @param _reportDate 上报日期
                     * 
                     */
                    void SetReportDate(const std::string& _reportDate);

                    /**
                     * 判断参数 ReportDate 是否已赋值
                     * @return ReportDate 是否已赋值
                     * 
                     */
                    bool ReportDateHasBeenSet() const;

                    /**
                     * 获取腾讯云uin
                     * @return Uin 腾讯云uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置腾讯云uin
                     * @param _uin 腾讯云uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取资源id:环境id
                     * @return EnvId 资源id:环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置资源id:环境id
                     * @param _envId 资源id:环境id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取上报任务状态
                     * @return Status 上报任务状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置上报任务状态
                     * @param _status 上报任务状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 上报日期
                     */
                    std::string m_reportDate;
                    bool m_reportDateHasBeenSet;

                    /**
                     * 腾讯云uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 资源id:环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 上报任务状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_SPECIALCOSTITEM_H_
