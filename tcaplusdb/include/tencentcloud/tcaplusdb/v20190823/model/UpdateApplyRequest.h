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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_UPDATEAPPLYREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_UPDATEAPPLYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ApplyStatus.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * UpdateApply请求参数结构体
                */
                class UpdateApplyRequest : public AbstractModel
                {
                public:
                    UpdateApplyRequest();
                    ~UpdateApplyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取申请单状态
                     * @return ApplyStatus 申请单状态
                     * 
                     */
                    std::vector<ApplyStatus> GetApplyStatus() const;

                    /**
                     * 设置申请单状态
                     * @param _applyStatus 申请单状态
                     * 
                     */
                    void SetApplyStatus(const std::vector<ApplyStatus>& _applyStatus);

                    /**
                     * 判断参数 ApplyStatus 是否已赋值
                     * @return ApplyStatus 是否已赋值
                     * 
                     */
                    bool ApplyStatusHasBeenSet() const;

                private:

                    /**
                     * 申请单状态
                     */
                    std::vector<ApplyStatus> m_applyStatus;
                    bool m_applyStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_UPDATEAPPLYREQUEST_H_
