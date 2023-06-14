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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CROSSBACKUPADDR_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CROSSBACKUPADDR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 跨地域备份下载地址集合
                */
                class CrossBackupAddr : public AbstractModel
                {
                public:
                    CrossBackupAddr();
                    ~CrossBackupAddr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取跨地域备份目标地域
                     * @return CrossRegion 跨地域备份目标地域
                     * 
                     */
                    std::string GetCrossRegion() const;

                    /**
                     * 设置跨地域备份目标地域
                     * @param _crossRegion 跨地域备份目标地域
                     * 
                     */
                    void SetCrossRegion(const std::string& _crossRegion);

                    /**
                     * 判断参数 CrossRegion 是否已赋值
                     * @return CrossRegion 是否已赋值
                     * 
                     */
                    bool CrossRegionHasBeenSet() const;

                    /**
                     * 获取跨地域备份内网下载地址
                     * @return CrossInternalAddr 跨地域备份内网下载地址
                     * 
                     */
                    std::string GetCrossInternalAddr() const;

                    /**
                     * 设置跨地域备份内网下载地址
                     * @param _crossInternalAddr 跨地域备份内网下载地址
                     * 
                     */
                    void SetCrossInternalAddr(const std::string& _crossInternalAddr);

                    /**
                     * 判断参数 CrossInternalAddr 是否已赋值
                     * @return CrossInternalAddr 是否已赋值
                     * 
                     */
                    bool CrossInternalAddrHasBeenSet() const;

                    /**
                     * 获取跨地域备份外网下载地址
                     * @return CrossExternalAddr 跨地域备份外网下载地址
                     * 
                     */
                    std::string GetCrossExternalAddr() const;

                    /**
                     * 设置跨地域备份外网下载地址
                     * @param _crossExternalAddr 跨地域备份外网下载地址
                     * 
                     */
                    void SetCrossExternalAddr(const std::string& _crossExternalAddr);

                    /**
                     * 判断参数 CrossExternalAddr 是否已赋值
                     * @return CrossExternalAddr 是否已赋值
                     * 
                     */
                    bool CrossExternalAddrHasBeenSet() const;

                private:

                    /**
                     * 跨地域备份目标地域
                     */
                    std::string m_crossRegion;
                    bool m_crossRegionHasBeenSet;

                    /**
                     * 跨地域备份内网下载地址
                     */
                    std::string m_crossInternalAddr;
                    bool m_crossInternalAddrHasBeenSet;

                    /**
                     * 跨地域备份外网下载地址
                     */
                    std::string m_crossExternalAddr;
                    bool m_crossExternalAddrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CROSSBACKUPADDR_H_
