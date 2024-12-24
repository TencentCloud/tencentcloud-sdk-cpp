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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_SYNCDEPARTMENTREQUEST_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_SYNCDEPARTMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aca/v20210323/model/CommonHeader.h>
#include <tencentcloud/aca/v20210323/model/SyncDepartmentData.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * SyncDepartment请求参数结构体
                */
                class SyncDepartmentRequest : public AbstractModel
                {
                public:
                    SyncDepartmentRequest();
                    ~SyncDepartmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求头
                     * @return Header 请求头
                     * 
                     */
                    CommonHeader GetHeader() const;

                    /**
                     * 设置请求头
                     * @param _header 请求头
                     * 
                     */
                    void SetHeader(const CommonHeader& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                    /**
                     * 获取同步数据
                     * @return Data 同步数据
                     * 
                     */
                    SyncDepartmentData GetData() const;

                    /**
                     * 设置同步数据
                     * @param _data 同步数据
                     * 
                     */
                    void SetData(const SyncDepartmentData& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 请求头
                     */
                    CommonHeader m_header;
                    bool m_headerHasBeenSet;

                    /**
                     * 同步数据
                     */
                    SyncDepartmentData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_SYNCDEPARTMENTREQUEST_H_
