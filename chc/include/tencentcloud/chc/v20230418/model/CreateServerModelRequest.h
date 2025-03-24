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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_CREATESERVERMODELREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_CREATESERVERMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/ServerModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateServerModel请求参数结构体
                */
                class CreateServerModelRequest : public AbstractModel
                {
                public:
                    CreateServerModelRequest();
                    ~CreateServerModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备型号详情
                     * @return ModelDetail 设备型号详情
                     * 
                     */
                    ServerModel GetModelDetail() const;

                    /**
                     * 设置设备型号详情
                     * @param _modelDetail 设备型号详情
                     * 
                     */
                    void SetModelDetail(const ServerModel& _modelDetail);

                    /**
                     * 判断参数 ModelDetail 是否已赋值
                     * @return ModelDetail 是否已赋值
                     * 
                     */
                    bool ModelDetailHasBeenSet() const;

                private:

                    /**
                     * 设备型号详情
                     */
                    ServerModel m_modelDetail;
                    bool m_modelDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_CREATESERVERMODELREQUEST_H_
