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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_GETLICENSESREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_GETLICENSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * GetLicenses请求参数结构体
                */
                class GetLicensesRequest : public AbstractModel
                {
                public:
                    GetLicensesRequest();
                    ~GetLicensesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页码
                     * @return PageNum 页码
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置页码
                     * @param _pageNum 页码
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取页面数量
                     * @return PageSize 页面数量
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页面数量
                     * @param _pageSize 页面数量
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取projectId
                     * @return ProjectId projectId
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置projectId
                     * @param _projectId projectId
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
                     * 获取DeviceId
                     * @return DeviceId DeviceId
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置DeviceId
                     * @param _deviceId DeviceId
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取license状态：0:未绑定；1:已绑定；2:已停服；3:已退费
                     * @return Status license状态：0:未绑定；1:已绑定；2:已停服；3:已退费
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置license状态：0:未绑定；1:已绑定；2:已停服；3:已退费
                     * @param _status license状态：0:未绑定；1:已绑定；2:已停服；3:已退费
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 页码
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 页面数量
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * projectId
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * DeviceId
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * license状态：0:未绑定；1:已绑定；2:已停服；3:已退费
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_GETLICENSESREQUEST_H_
