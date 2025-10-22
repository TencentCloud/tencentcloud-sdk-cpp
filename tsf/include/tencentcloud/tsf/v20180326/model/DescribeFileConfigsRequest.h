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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEFILECONFIGSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEFILECONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeFileConfigs请求参数结构体
                */
                class DescribeFileConfigsRequest : public AbstractModel
                {
                public:
                    DescribeFileConfigsRequest();
                    ~DescribeFileConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置ID。该参数可以通过调用 [DescribeFileConfigs](https://cloud.tencent.com/document/product/649/58593) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?rid=1&subTab=file)配置详情-配置版本页查看；也可以调用[CreateFileConfig](https://cloud.tencent.com/document/product/649/58594)创建新的配置。
                     * @return ConfigId 配置ID。该参数可以通过调用 [DescribeFileConfigs](https://cloud.tencent.com/document/product/649/58593) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?rid=1&subTab=file)配置详情-配置版本页查看；也可以调用[CreateFileConfig](https://cloud.tencent.com/document/product/649/58594)创建新的配置。
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置ID。该参数可以通过调用 [DescribeFileConfigs](https://cloud.tencent.com/document/product/649/58593) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?rid=1&subTab=file)配置详情-配置版本页查看；也可以调用[CreateFileConfig](https://cloud.tencent.com/document/product/649/58594)创建新的配置。
                     * @param _configId 配置ID。该参数可以通过调用 [DescribeFileConfigs](https://cloud.tencent.com/document/product/649/58593) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?rid=1&subTab=file)配置详情-配置版本页查看；也可以调用[CreateFileConfig](https://cloud.tencent.com/document/product/649/58594)创建新的配置。
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取配置项ID列表。该参数可以通过调用 [DescribeFileConfigs](https://cloud.tencent.com/document/product/649/58593) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?rid=1&subTab=file)配置详情-配置版本页查看；也可以调用[CreateFileConfig](https://cloud.tencent.com/document/product/649/58594)创建新的配置。
                     * @return ConfigIdList 配置项ID列表。该参数可以通过调用 [DescribeFileConfigs](https://cloud.tencent.com/document/product/649/58593) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?rid=1&subTab=file)配置详情-配置版本页查看；也可以调用[CreateFileConfig](https://cloud.tencent.com/document/product/649/58594)创建新的配置。
                     * 
                     */
                    std::vector<std::string> GetConfigIdList() const;

                    /**
                     * 设置配置项ID列表。该参数可以通过调用 [DescribeFileConfigs](https://cloud.tencent.com/document/product/649/58593) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?rid=1&subTab=file)配置详情-配置版本页查看；也可以调用[CreateFileConfig](https://cloud.tencent.com/document/product/649/58594)创建新的配置。
                     * @param _configIdList 配置项ID列表。该参数可以通过调用 [DescribeFileConfigs](https://cloud.tencent.com/document/product/649/58593) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?rid=1&subTab=file)配置详情-配置版本页查看；也可以调用[CreateFileConfig](https://cloud.tencent.com/document/product/649/58594)创建新的配置。
                     * 
                     */
                    void SetConfigIdList(const std::vector<std::string>& _configIdList);

                    /**
                     * 判断参数 ConfigIdList 是否已赋值
                     * @return ConfigIdList 是否已赋值
                     * 
                     */
                    bool ConfigIdListHasBeenSet() const;

                    /**
                     * 获取配置项名称。
                     * @return ConfigName 配置项名称。
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置项名称。
                     * @param _configName 配置项名称。
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取应用ID。该参数可以通过调用 [DescribeApplications](https://cloud.tencent.com/document/product/649/36090) 的返回值中的 ApplicationId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/app)查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/product/649/36094)创建新的应用。
                     * @return ApplicationId 应用ID。该参数可以通过调用 [DescribeApplications](https://cloud.tencent.com/document/product/649/36090) 的返回值中的 ApplicationId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/app)查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/product/649/36094)创建新的应用。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID。该参数可以通过调用 [DescribeApplications](https://cloud.tencent.com/document/product/649/36090) 的返回值中的 ApplicationId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/app)查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/product/649/36094)创建新的应用。
                     * @param _applicationId 应用ID。该参数可以通过调用 [DescribeApplications](https://cloud.tencent.com/document/product/649/36090) 的返回值中的 ApplicationId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/app)查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/product/649/36094)创建新的应用。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取配置项版本。
                     * @return ConfigVersion 配置项版本。
                     * 
                     */
                    std::string GetConfigVersion() const;

                    /**
                     * 设置配置项版本。
                     * @param _configVersion 配置项版本。
                     * 
                     */
                    void SetConfigVersion(const std::string& _configVersion);

                    /**
                     * 判断参数 ConfigVersion 是否已赋值
                     * @return ConfigVersion 是否已赋值
                     * 
                     */
                    bool ConfigVersionHasBeenSet() const;

                private:

                    /**
                     * 配置ID。该参数可以通过调用 [DescribeFileConfigs](https://cloud.tencent.com/document/product/649/58593) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?rid=1&subTab=file)配置详情-配置版本页查看；也可以调用[CreateFileConfig](https://cloud.tencent.com/document/product/649/58594)创建新的配置。
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 配置项ID列表。该参数可以通过调用 [DescribeFileConfigs](https://cloud.tencent.com/document/product/649/58593) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?rid=1&subTab=file)配置详情-配置版本页查看；也可以调用[CreateFileConfig](https://cloud.tencent.com/document/product/649/58594)创建新的配置。
                     */
                    std::vector<std::string> m_configIdList;
                    bool m_configIdListHasBeenSet;

                    /**
                     * 配置项名称。
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 应用ID。该参数可以通过调用 [DescribeApplications](https://cloud.tencent.com/document/product/649/36090) 的返回值中的 ApplicationId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/app)查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/product/649/36094)创建新的应用。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 配置项版本。
                     */
                    std::string m_configVersion;
                    bool m_configVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEFILECONFIGSREQUEST_H_
