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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EXTERNALSERVICE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EXTERNALSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/CustomServiceDefine.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 共用组件信息
                */
                class ExternalService : public AbstractModel
                {
                public:
                    ExternalService();
                    ~ExternalService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取共用组件类型，EMR/CUSTOM
                     * @return ShareType 共用组件类型，EMR/CUSTOM
                     * 
                     */
                    std::string GetShareType() const;

                    /**
                     * 设置共用组件类型，EMR/CUSTOM
                     * @param _shareType 共用组件类型，EMR/CUSTOM
                     * 
                     */
                    void SetShareType(const std::string& _shareType);

                    /**
                     * 判断参数 ShareType 是否已赋值
                     * @return ShareType 是否已赋值
                     * 
                     */
                    bool ShareTypeHasBeenSet() const;

                    /**
                     * 获取共用组件名
                     * @return Service 共用组件名
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置共用组件名
                     * @param _service 共用组件名
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取共用组件集群
                     * @return InstanceId 共用组件集群
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置共用组件集群
                     * @param _instanceId 共用组件集群
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
                     * 获取自定义参数集合
                     * @return CustomServiceDefineList 自定义参数集合
                     * 
                     */
                    std::vector<CustomServiceDefine> GetCustomServiceDefineList() const;

                    /**
                     * 设置自定义参数集合
                     * @param _customServiceDefineList 自定义参数集合
                     * 
                     */
                    void SetCustomServiceDefineList(const std::vector<CustomServiceDefine>& _customServiceDefineList);

                    /**
                     * 判断参数 CustomServiceDefineList 是否已赋值
                     * @return CustomServiceDefineList 是否已赋值
                     * 
                     */
                    bool CustomServiceDefineListHasBeenSet() const;

                private:

                    /**
                     * 共用组件类型，EMR/CUSTOM
                     */
                    std::string m_shareType;
                    bool m_shareTypeHasBeenSet;

                    /**
                     * 共用组件名
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 共用组件集群
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 自定义参数集合
                     */
                    std::vector<CustomServiceDefine> m_customServiceDefineList;
                    bool m_customServiceDefineListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EXTERNALSERVICE_H_
