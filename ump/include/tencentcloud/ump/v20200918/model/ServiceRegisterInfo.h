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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_SERVICEREGISTERINFO_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_SERVICEREGISTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 用于服务注册时表示当前服务的具体信息
                */
                class ServiceRegisterInfo : public AbstractModel
                {
                public:
                    ServiceRegisterInfo();
                    ~ServiceRegisterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前服务的回调地址
                     * @return CgiUrl 当前服务的回调地址
                     * 
                     */
                    std::string GetCgiUrl() const;

                    /**
                     * 设置当前服务的回调地址
                     * @param _cgiUrl 当前服务的回调地址
                     * 
                     */
                    void SetCgiUrl(const std::string& _cgiUrl);

                    /**
                     * 判断参数 CgiUrl 是否已赋值
                     * @return CgiUrl 是否已赋值
                     * 
                     */
                    bool CgiUrlHasBeenSet() const;

                    /**
                     * 获取当前服务类型:
1: 多经服务
2: 相机误报警确认
3: 底图更新
                     * @return ServiceType 当前服务类型:
1: 多经服务
2: 相机误报警确认
3: 底图更新
                     * 
                     */
                    uint64_t GetServiceType() const;

                    /**
                     * 设置当前服务类型:
1: 多经服务
2: 相机误报警确认
3: 底图更新
                     * @param _serviceType 当前服务类型:
1: 多经服务
2: 相机误报警确认
3: 底图更新
                     * 
                     */
                    void SetServiceType(const uint64_t& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                private:

                    /**
                     * 当前服务的回调地址
                     */
                    std::string m_cgiUrl;
                    bool m_cgiUrlHasBeenSet;

                    /**
                     * 当前服务类型:
1: 多经服务
2: 相机误报警确认
3: 底图更新
                     */
                    uint64_t m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_SERVICEREGISTERINFO_H_
