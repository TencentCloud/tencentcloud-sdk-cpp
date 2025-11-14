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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_MODIFYACCESSWHITELISTSTATUSREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_MODIFYACCESSWHITELISTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyAccessWhiteListStatus请求参数结构体
                */
                class ModifyAccessWhiteListStatusRequest : public AbstractModel
                {
                public:
                    ModifyAccessWhiteListStatusRequest();
                    ~ModifyAccessWhiteListStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取true：放开全部来源IP；false：不放开全部来源IP
                     * @return AllowAny true：放开全部来源IP；false：不放开全部来源IP
                     * 
                     */
                    bool GetAllowAny() const;

                    /**
                     * 设置true：放开全部来源IP；false：不放开全部来源IP
                     * @param _allowAny true：放开全部来源IP；false：不放开全部来源IP
                     * 
                     */
                    void SetAllowAny(const bool& _allowAny);

                    /**
                     * 判断参数 AllowAny 是否已赋值
                     * @return AllowAny 是否已赋值
                     * 
                     */
                    bool AllowAnyHasBeenSet() const;

                private:

                    /**
                     * true：放开全部来源IP；false：不放开全部来源IP
                     */
                    bool m_allowAny;
                    bool m_allowAnyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYACCESSWHITELISTSTATUSREQUEST_H_
