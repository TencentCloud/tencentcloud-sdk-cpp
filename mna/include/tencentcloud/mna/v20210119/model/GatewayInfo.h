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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GATEWAYINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GATEWAYINFO_H_

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
                * 网关信息
                */
                class GatewayInfo : public AbstractModel
                {
                public:
                    GatewayInfo();
                    ~GatewayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>网关ID</p>
                     * @return GatewayId <p>网关ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关ID</p>
                     * @param _gatewayId <p>网关ID</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>网关名称</p>
                     * @return GatewayName <p>网关名称</p>
                     * 
                     */
                    std::string GetGatewayName() const;

                    /**
                     * 设置<p>网关名称</p>
                     * @param _gatewayName <p>网关名称</p>
                     * 
                     */
                    void SetGatewayName(const std::string& _gatewayName);

                    /**
                     * 判断参数 GatewayName 是否已赋值
                     * @return GatewayName 是否已赋值
                     * 
                     */
                    bool GatewayNameHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，单位：秒</p>
                     * @return CreateTime <p>创建时间，单位：秒</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，单位：秒</p>
                     * @param _createTime <p>创建时间，单位：秒</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>网关状态。0：正常，1：异常</p>
                     * @return Status <p>网关状态。0：正常，1：异常</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>网关状态。0：正常，1：异常</p>
                     * @param _status <p>网关状态。0：正常，1：异常</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>网关实例数</p>
                     * @return InstanceSize <p>网关实例数</p>
                     * 
                     */
                    int64_t GetInstanceSize() const;

                    /**
                     * 设置<p>网关实例数</p>
                     * @param _instanceSize <p>网关实例数</p>
                     * 
                     */
                    void SetInstanceSize(const int64_t& _instanceSize);

                    /**
                     * 判断参数 InstanceSize 是否已赋值
                     * @return InstanceSize 是否已赋值
                     * 
                     */
                    bool InstanceSizeHasBeenSet() const;

                private:

                    /**
                     * <p>网关ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>网关名称</p>
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                    /**
                     * <p>创建时间，单位：秒</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>网关状态。0：正常，1：异常</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>网关实例数</p>
                     */
                    int64_t m_instanceSize;
                    bool m_instanceSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GATEWAYINFO_H_
