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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ORDERINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ORDERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 返回上报的订单信息
                */
                class OrderInfo : public AbstractModel
                {
                public:
                    OrderInfo();
                    ~OrderInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取父账号uin
                     * @return Uin 父账号uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置父账号uin
                     * @param _uin 父账号uin
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
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取用量类型
                     * @return PackageType 用量类型
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置用量类型
                     * @param _packageType 用量类型
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取订单编号唯一标识符
                     * @return OrderId 订单编号唯一标识符
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单编号唯一标识符
                     * @param _orderId 订单编号唯一标识符
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
                     * 获取上报月份，默认当前月
                     * @return ReportMonth 上报月份，默认当前月
                     * 
                     */
                    std::string GetReportMonth() const;

                    /**
                     * 设置上报月份，默认当前月
                     * @param _reportMonth 上报月份，默认当前月
                     * 
                     */
                    void SetReportMonth(const std::string& _reportMonth);

                    /**
                     * 判断参数 ReportMonth 是否已赋值
                     * @return ReportMonth 是否已赋值
                     * 
                     */
                    bool ReportMonthHasBeenSet() const;

                    /**
                     * 获取数据更新时间
                     * @return Updated 数据更新时间
                     * 
                     */
                    std::string GetUpdated() const;

                    /**
                     * 设置数据更新时间
                     * @param _updated 数据更新时间
                     * 
                     */
                    void SetUpdated(const std::string& _updated);

                    /**
                     * 判断参数 Updated 是否已赋值
                     * @return Updated 是否已赋值
                     * 
                     */
                    bool UpdatedHasBeenSet() const;

                private:

                    /**
                     * 父账号uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 用量类型
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 订单编号唯一标识符
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 上报月份，默认当前月
                     */
                    std::string m_reportMonth;
                    bool m_reportMonthHasBeenSet;

                    /**
                     * 数据更新时间
                     */
                    std::string m_updated;
                    bool m_updatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ORDERINFO_H_
