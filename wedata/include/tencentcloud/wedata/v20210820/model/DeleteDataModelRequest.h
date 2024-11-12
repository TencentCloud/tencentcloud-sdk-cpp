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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEDATAMODELREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEDATAMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DeleteDataModel请求参数结构体
                */
                class DeleteDataModelRequest : public AbstractModel
                {
                public:
                    DeleteDataModelRequest();
                    ~DeleteDataModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云应用的实例id
                     * @return CloudappId 云应用的实例id
                     * 
                     */
                    std::string GetCloudappId() const;

                    /**
                     * 设置云应用的实例id
                     * @param _cloudappId 云应用的实例id
                     * 
                     */
                    void SetCloudappId(const std::string& _cloudappId);

                    /**
                     * 判断参数 CloudappId 是否已赋值
                     * @return CloudappId 是否已赋值
                     * 
                     */
                    bool CloudappIdHasBeenSet() const;

                    /**
                     * 获取数据建模的实例id
                     * @return DataModelId 数据建模的实例id
                     * 
                     */
                    std::string GetDataModelId() const;

                    /**
                     * 设置数据建模的实例id
                     * @param _dataModelId 数据建模的实例id
                     * 
                     */
                    void SetDataModelId(const std::string& _dataModelId);

                    /**
                     * 判断参数 DataModelId 是否已赋值
                     * @return DataModelId 是否已赋值
                     * 
                     */
                    bool DataModelIdHasBeenSet() const;

                    /**
                     * 获取用户的子账号id
                     * @return UserId 用户的子账号id
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户的子账号id
                     * @param _userId 用户的子账号id
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 云应用的实例id
                     */
                    std::string m_cloudappId;
                    bool m_cloudappIdHasBeenSet;

                    /**
                     * 数据建模的实例id
                     */
                    std::string m_dataModelId;
                    bool m_dataModelIdHasBeenSet;

                    /**
                     * 用户的子账号id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEDATAMODELREQUEST_H_
