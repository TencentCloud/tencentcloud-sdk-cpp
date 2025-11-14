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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_MODIFYACCESSWHITELISTAUTOSTATUSREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_MODIFYACCESSWHITELISTAUTOSTATUSREQUEST_H_

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
                * ModifyAccessWhiteListAutoStatus请求参数结构体
                */
                class ModifyAccessWhiteListAutoStatusRequest : public AbstractModel
                {
                public:
                    ModifyAccessWhiteListAutoStatusRequest();
                    ~ModifyAccessWhiteListAutoStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取true：放开自动添加IP；false：不放开自动添加IP
                     * @return AllowAuto true：放开自动添加IP；false：不放开自动添加IP
                     * 
                     */
                    bool GetAllowAuto() const;

                    /**
                     * 设置true：放开自动添加IP；false：不放开自动添加IP
                     * @param _allowAuto true：放开自动添加IP；false：不放开自动添加IP
                     * 
                     */
                    void SetAllowAuto(const bool& _allowAuto);

                    /**
                     * 判断参数 AllowAuto 是否已赋值
                     * @return AllowAuto 是否已赋值
                     * 
                     */
                    bool AllowAutoHasBeenSet() const;

                private:

                    /**
                     * true：放开自动添加IP；false：不放开自动添加IP
                     */
                    bool m_allowAuto;
                    bool m_allowAutoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYACCESSWHITELISTAUTOSTATUSREQUEST_H_
