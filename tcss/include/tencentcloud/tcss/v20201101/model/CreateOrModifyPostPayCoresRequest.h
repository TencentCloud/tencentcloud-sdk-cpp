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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEORMODIFYPOSTPAYCORESREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEORMODIFYPOSTPAYCORESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateOrModifyPostPayCores请求参数结构体
                */
                class CreateOrModifyPostPayCoresRequest : public AbstractModel
                {
                public:
                    CreateOrModifyPostPayCoresRequest();
                    ~CreateOrModifyPostPayCoresRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取弹性计费上限，最小值500
                     * @return CoresCnt 弹性计费上限，最小值500
                     * 
                     */
                    uint64_t GetCoresCnt() const;

                    /**
                     * 设置弹性计费上限，最小值500
                     * @param _coresCnt 弹性计费上限，最小值500
                     * 
                     */
                    void SetCoresCnt(const uint64_t& _coresCnt);

                    /**
                     * 判断参数 CoresCnt 是否已赋值
                     * @return CoresCnt 是否已赋值
                     * 
                     */
                    bool CoresCntHasBeenSet() const;

                private:

                    /**
                     * 弹性计费上限，最小值500
                     */
                    uint64_t m_coresCnt;
                    bool m_coresCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEORMODIFYPOSTPAYCORESREQUEST_H_
