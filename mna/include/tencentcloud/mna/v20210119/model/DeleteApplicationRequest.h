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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DELETEAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DELETEAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/DelApplicationList.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * DeleteApplication请求参数结构体
                */
                class DeleteApplicationRequest : public AbstractModel
                {
                public:
                    DeleteApplicationRequest();
                    ~DeleteApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用id列表
                     * @return MpApplicationIdList 应用id列表
                     * 
                     */
                    std::vector<DelApplicationList> GetMpApplicationIdList() const;

                    /**
                     * 设置应用id列表
                     * @param _mpApplicationIdList 应用id列表
                     * 
                     */
                    void SetMpApplicationIdList(const std::vector<DelApplicationList>& _mpApplicationIdList);

                    /**
                     * 判断参数 MpApplicationIdList 是否已赋值
                     * @return MpApplicationIdList 是否已赋值
                     * 
                     */
                    bool MpApplicationIdListHasBeenSet() const;

                private:

                    /**
                     * 应用id列表
                     */
                    std::vector<DelApplicationList> m_mpApplicationIdList;
                    bool m_mpApplicationIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DELETEAPPLICATIONREQUEST_H_
