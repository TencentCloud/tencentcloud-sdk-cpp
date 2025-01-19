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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPCOSINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPCOSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 备份实例中关于cos的信息
                */
                class BackupCosInfo : public AbstractModel
                {
                public:
                    BackupCosInfo();
                    ~BackupCosInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份文件所在的cos桶
                     * @return CosBucket 备份文件所在的cos桶
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置备份文件所在的cos桶
                     * @param _cosBucket 备份文件所在的cos桶
                     * 
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取备份文件所在的完整cos路径
                     * @return CosPath 备份文件所在的完整cos路径
                     * 
                     */
                    std::string GetCosPath() const;

                    /**
                     * 设置备份文件所在的完整cos路径
                     * @param _cosPath 备份文件所在的完整cos路径
                     * 
                     */
                    void SetCosPath(const std::string& _cosPath);

                    /**
                     * 判断参数 CosPath 是否已赋值
                     * @return CosPath 是否已赋值
                     * 
                     */
                    bool CosPathHasBeenSet() const;

                    /**
                     * 获取备份文件名称
                     * @return SnapShotPath 备份文件名称
                     * 
                     */
                    std::string GetSnapShotPath() const;

                    /**
                     * 设置备份文件名称
                     * @param _snapShotPath 备份文件名称
                     * 
                     */
                    void SetSnapShotPath(const std::string& _snapShotPath);

                    /**
                     * 判断参数 SnapShotPath 是否已赋值
                     * @return SnapShotPath 是否已赋值
                     * 
                     */
                    bool SnapShotPathHasBeenSet() const;

                private:

                    /**
                     * 备份文件所在的cos桶
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * 备份文件所在的完整cos路径
                     */
                    std::string m_cosPath;
                    bool m_cosPathHasBeenSet;

                    /**
                     * 备份文件名称
                     */
                    std::string m_snapShotPath;
                    bool m_snapShotPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPCOSINFO_H_
