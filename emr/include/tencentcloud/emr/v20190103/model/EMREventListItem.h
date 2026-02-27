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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EMREVENTLISTITEM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EMREVENTLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 事件详情列表
                */
                class EMREventListItem : public AbstractModel
                {
                public:
                    EMREventListItem();
                    ~EMREventListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件受影响ip
                     * @return Host 事件受影响ip
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置事件受影响ip
                     * @param _host 事件受影响ip
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取事件受影响的服务角色
                     * @return Role 事件受影响的服务角色
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置事件受影响的服务角色
                     * @param _role 事件受影响的服务角色
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取事件名称
                     * @return Name 事件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置事件名称
                     * @param _name 事件名称
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
                     * 获取事件告警详情
                     * @return Detail 事件告警详情
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置事件告警详情
                     * @param _detail 事件告警详情
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取事件发生时间
                     * @return CreateTime 事件发生时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置事件发生时间
                     * @param _createTime 事件发生时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 事件受影响ip
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 事件受影响的服务角色
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 事件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 事件告警详情
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 事件发生时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EMREVENTLISTITEM_H_
