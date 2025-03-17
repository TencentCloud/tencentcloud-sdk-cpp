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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXCHANGEINSTANCEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXCHANGEINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackInstanceInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 交换实例信息
                */
                class ExchangeInstanceInfo : public AbstractModel
                {
                public:
                    ExchangeInstanceInfo();
                    ~ExchangeInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源实例信息
                     * @return SrcInstanceInfo 源实例信息
                     * 
                     */
                    RollbackInstanceInfo GetSrcInstanceInfo() const;

                    /**
                     * 设置源实例信息
                     * @param _srcInstanceInfo 源实例信息
                     * 
                     */
                    void SetSrcInstanceInfo(const RollbackInstanceInfo& _srcInstanceInfo);

                    /**
                     * 判断参数 SrcInstanceInfo 是否已赋值
                     * @return SrcInstanceInfo 是否已赋值
                     * 
                     */
                    bool SrcInstanceInfoHasBeenSet() const;

                    /**
                     * 获取目标实例信息
                     * @return DstInstanceInfo 目标实例信息
                     * 
                     */
                    RollbackInstanceInfo GetDstInstanceInfo() const;

                    /**
                     * 设置目标实例信息
                     * @param _dstInstanceInfo 目标实例信息
                     * 
                     */
                    void SetDstInstanceInfo(const RollbackInstanceInfo& _dstInstanceInfo);

                    /**
                     * 判断参数 DstInstanceInfo 是否已赋值
                     * @return DstInstanceInfo 是否已赋值
                     * 
                     */
                    bool DstInstanceInfoHasBeenSet() const;

                private:

                    /**
                     * 源实例信息
                     */
                    RollbackInstanceInfo m_srcInstanceInfo;
                    bool m_srcInstanceInfoHasBeenSet;

                    /**
                     * 目标实例信息
                     */
                    RollbackInstanceInfo m_dstInstanceInfo;
                    bool m_dstInstanceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXCHANGEINSTANCEINFO_H_
