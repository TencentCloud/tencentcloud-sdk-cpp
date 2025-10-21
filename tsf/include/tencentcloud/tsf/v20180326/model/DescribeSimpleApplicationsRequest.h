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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESIMPLEAPPLICATIONSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESIMPLEAPPLICATIONSREQUEST_H_

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
                * DescribeSimpleApplications请求参数结构体
                */
                class DescribeSimpleApplicationsRequest : public AbstractModel
                {
                public:
                    DescribeSimpleApplicationsRequest();
                    ~DescribeSimpleApplicationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID列表，可通过调用[DescribeApplications](https://cloud.tencent.com/document/api/649/36090)查询已创建的应用列表或登录控制台进行查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/api/649/36094)创建新的应用。
                     * @return ApplicationIdList 应用ID列表，可通过调用[DescribeApplications](https://cloud.tencent.com/document/api/649/36090)查询已创建的应用列表或登录控制台进行查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/api/649/36094)创建新的应用。
                     * 
                     */
                    std::vector<std::string> GetApplicationIdList() const;

                    /**
                     * 设置应用ID列表，可通过调用[DescribeApplications](https://cloud.tencent.com/document/api/649/36090)查询已创建的应用列表或登录控制台进行查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/api/649/36094)创建新的应用。
                     * @param _applicationIdList 应用ID列表，可通过调用[DescribeApplications](https://cloud.tencent.com/document/api/649/36090)查询已创建的应用列表或登录控制台进行查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/api/649/36094)创建新的应用。
                     * 
                     */
                    void SetApplicationIdList(const std::vector<std::string>& _applicationIdList);

                    /**
                     * 判断参数 ApplicationIdList 是否已赋值
                     * @return ApplicationIdList 是否已赋值
                     * 
                     */
                    bool ApplicationIdListHasBeenSet() const;

                    /**
                     * 获取指定应用类型，目前支持：
- `V`：普通应用/CVM应用
- `C`：容器应用
- `S`：serverless 应用
                     * @return ApplicationType 指定应用类型，目前支持：
- `V`：普通应用/CVM应用
- `C`：容器应用
- `S`：serverless 应用
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置指定应用类型，目前支持：
- `V`：普通应用/CVM应用
- `C`：容器应用
- `S`：serverless 应用
                     * @param _applicationType 指定应用类型，目前支持：
- `V`：普通应用/CVM应用
- `C`：容器应用
- `S`：serverless 应用
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取数量限制，默认为20，最大值为100。关于Limit详见[API简介](https://cloud.tencent.com/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89)
                     * @return Limit 数量限制，默认为20，最大值为100。关于Limit详见[API简介](https://cloud.tencent.com/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89)
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置数量限制，默认为20，最大值为100。关于Limit详见[API简介](https://cloud.tencent.com/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89)
                     * @param _limit 数量限制，默认为20，最大值为100。关于Limit详见[API简介](https://cloud.tencent.com/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89)
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
                     * 获取偏移量，默认为0。关于Offset详见[API简介](https://cloud.tencent.com/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89)
                     * @return Offset 偏移量，默认为0。关于Offset详见[API简介](https://cloud.tencent.com/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89)
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于Offset详见[API简介](https://cloud.tencent.com/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89)
                     * @param _offset 偏移量，默认为0。关于Offset详见[API简介](https://cloud.tencent.com/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89)
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
                     * 获取微服务类型
                     * @return MicroserviceType 微服务类型
                     * 
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置微服务类型
                     * @param _microserviceType 微服务类型
                     * 
                     */
                    void SetMicroserviceType(const std::string& _microserviceType);

                    /**
                     * 判断参数 MicroserviceType 是否已赋值
                     * @return MicroserviceType 是否已赋值
                     * 
                     */
                    bool MicroserviceTypeHasBeenSet() const;

                    /**
                     * 获取应用资源类型列表；DEF 表示默认资源类型；GW 表示网关资源类型
                     * @return ApplicationResourceTypeList 应用资源类型列表；DEF 表示默认资源类型；GW 表示网关资源类型
                     * 
                     */
                    std::vector<std::string> GetApplicationResourceTypeList() const;

                    /**
                     * 设置应用资源类型列表；DEF 表示默认资源类型；GW 表示网关资源类型
                     * @param _applicationResourceTypeList 应用资源类型列表；DEF 表示默认资源类型；GW 表示网关资源类型
                     * 
                     */
                    void SetApplicationResourceTypeList(const std::vector<std::string>& _applicationResourceTypeList);

                    /**
                     * 判断参数 ApplicationResourceTypeList 是否已赋值
                     * @return ApplicationResourceTypeList 是否已赋值
                     * 
                     */
                    bool ApplicationResourceTypeListHasBeenSet() const;

                    /**
                     * 获取通过id和name进行关键词过滤
                     * @return SearchWord 通过id和name进行关键词过滤
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置通过id和name进行关键词过滤
                     * @param _searchWord 通过id和name进行关键词过滤
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取是否关闭鉴权查询
                     * @return DisableProgramAuthCheck 是否关闭鉴权查询
                     * 
                     */
                    bool GetDisableProgramAuthCheck() const;

                    /**
                     * 设置是否关闭鉴权查询
                     * @param _disableProgramAuthCheck 是否关闭鉴权查询
                     * 
                     */
                    void SetDisableProgramAuthCheck(const bool& _disableProgramAuthCheck);

                    /**
                     * 判断参数 DisableProgramAuthCheck 是否已赋值
                     * @return DisableProgramAuthCheck 是否已赋值
                     * 
                     */
                    bool DisableProgramAuthCheckHasBeenSet() const;

                    /**
                     * 获取查询指定微服务类型的应用列表
                     * @return MicroserviceTypeList 查询指定微服务类型的应用列表
                     * 
                     */
                    std::vector<std::string> GetMicroserviceTypeList() const;

                    /**
                     * 设置查询指定微服务类型的应用列表
                     * @param _microserviceTypeList 查询指定微服务类型的应用列表
                     * 
                     */
                    void SetMicroserviceTypeList(const std::vector<std::string>& _microserviceTypeList);

                    /**
                     * 判断参数 MicroserviceTypeList 是否已赋值
                     * @return MicroserviceTypeList 是否已赋值
                     * 
                     */
                    bool MicroserviceTypeListHasBeenSet() const;

                private:

                    /**
                     * 应用ID列表，可通过调用[DescribeApplications](https://cloud.tencent.com/document/api/649/36090)查询已创建的应用列表或登录控制台进行查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/api/649/36094)创建新的应用。
                     */
                    std::vector<std::string> m_applicationIdList;
                    bool m_applicationIdListHasBeenSet;

                    /**
                     * 指定应用类型，目前支持：
- `V`：普通应用/CVM应用
- `C`：容器应用
- `S`：serverless 应用
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 数量限制，默认为20，最大值为100。关于Limit详见[API简介](https://cloud.tencent.com/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89)
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于Offset详见[API简介](https://cloud.tencent.com/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89)
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 微服务类型
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

                    /**
                     * 应用资源类型列表；DEF 表示默认资源类型；GW 表示网关资源类型
                     */
                    std::vector<std::string> m_applicationResourceTypeList;
                    bool m_applicationResourceTypeListHasBeenSet;

                    /**
                     * 通过id和name进行关键词过滤
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 是否关闭鉴权查询
                     */
                    bool m_disableProgramAuthCheck;
                    bool m_disableProgramAuthCheckHasBeenSet;

                    /**
                     * 查询指定微服务类型的应用列表
                     */
                    std::vector<std::string> m_microserviceTypeList;
                    bool m_microserviceTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESIMPLEAPPLICATIONSREQUEST_H_
